import numpy as np 
from numpy import linalg

def gauss_seidel(A, B, p, guess, q):

    m = g
    n = m

    while(q > 0):
        for i in range(p):
            n[i] = B[i]/A[i][i]
            for j in range(p):
                if(i == j):
                    continue
                n[i] = n[i] - (A[i][j]/A[i][i] * m[j])
                m[i] = n[i]
            q = q - 1
    print(m)

def traditional(A, B, p):
    
    A_inv = np.linalg.inv(A)
    W = np.dot(A_inv,B)
    print(W)

if __name__ == "__main__":
    j = 0
    a = []
    I = []
    with open("matrix",'r') as f:
        for i in f.readlines():
            j += 1
            I.append(float(i.strip('\n')))
            if(j == 9):
                a.append(I)
                I = []
                j = 0
    b = np.ones(9, dtype=int)*-1000
    g = np.ones(9)
    q = 25
    p = 9
    traditional(a,b,p)
