import matplotlib.pyplot as plt
import numpy as np


def f(x):
    # a = 1
    return 2*np.sqrt(x)

def OT(x):
    # k = 1
    return np.sqrt(1+2*x**2)

a = np.
for i in a:
    plt.plot(i,f(i),'.b')
    plt.plot(i,OT(i),'.g')

plt.show()
