#include <X11/Xlib.h>

#define MODKEY Mod1Mask
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(int argc, char *argv[]) {

    Display * dpy;
    XWindowAttributes attr;
    int screen;
    XEvent ev;
    XButtonEvent b_event;

    if(!(dpy = XOpenDisplay(0x0))) return 1;

    XGrabButton(dpy, 1, MODKEY, DefaultRootWindow(dpy), True,
            ButtonPressMask|ButtonReleaseMask|PointerMotionMask, GrabModeAsync, GrabModeAsync, None, None);
    XGrabButton(dpy, 3, MODKEY, DefaultRootWindow(dpy), True,
            ButtonPressMask|ButtonReleaseMask|PointerMotionMask, GrabModeAsync, GrabModeAsync, None, None);

    b_event.subwindow = None;

    for(;;) {

        XNextEvent(dpy, &ev);

        if(ev.type == ButtonPress && ev.xbutton.subwindow != None) {
            XRaiseWindow(dpy, ev.xbutton.subwindow);
            b_event = ev.xbutton;
        }
        else if(ev.type == MotionNotify && b_event.subwindow != None) {
            int xdiff = ev.xbutton.x_root - b_event.x_root;
            int ydiff = ev.xbutton.y_root - b_event.y_root;
            XMoveResizeWindow(dpy, b_event.subwindow,
                attr.x + (b_event.button==1 ? xdiff : 0),
                attr.y + (b_event.button==1 ? ydiff : 0),
                MAX(1, attr.width + (b_event.button==3 ? xdiff : 0)),
                MAX(1, attr.height + (b_event.button==3 ? ydiff : 0)));
    }   
        else if(ev.type == ButtonRelease);
            b_event.subwindow = None;


}
}
