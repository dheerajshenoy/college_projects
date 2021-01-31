def gauss_seidel(a, x, b):

    d = []
    # Get the diagonal elements
    for i in range(len(A)):
        for j in range(len(A[i])):
            if (i == j):
                d.append(A[i][j])
    
    D = A
    diff = X

    for i in range(len(A)):
        A[i].remove(d[i])
   
    for i in range(len(A)):
        for j in range(len(A[i])):
            diff[j] = (diff[j] + A[i][j] * X[j+1])/D[j]
    print(diff)

if __name__ == "__main__":
    A = [[2, 4], [3, 2]]
    X = [0, 0]
    B = [0, 2]
    gauss_seidel(A, X, B)
