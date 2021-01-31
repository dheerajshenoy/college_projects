#include <iostream>

using namespace std;

int gauss_seidel(float A[2][2], float B[2]) {
    int i, j, q;
    cout << "A:\n";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) {
            cout << "Enter the " << i << " x " << j << " matrix value: ";
            cin >> A[i][j];
        }

    cout << "B:\n";
    for(i=0;i<2;i++) {
        cout << "Enter the " << i << " matrix value: ";
        cin >> B[i];
        }

    float m[i], n[i];

    for(i=0;i<2;i++) {
        cout << "Enter initial guess " << i << " :"; 
        cin >> m[i];
    }
        
    cout << "Enter the number of iteration: " << endl;
    cin >> q;

    while(q>0) {
        for(i=0;i<2;i++) {
            n[i] = (B[i]/A[i][i]);
            for(j=0;j<2;j++) {
                if(i == j)
                    continue;
                n[i] = n[i] - ((A[i][j] / A[i][i]) * m[j]);
                m[i] = n[i];
            }
            cout << "x" << i+1 << " = " << n[i] << endl;
        }
        q--;
    }

    return 0;
}

int main() {
    float a[2][2], b[2], i, j;
    
    gauss_seidel(a,b);

    return 0;
}

