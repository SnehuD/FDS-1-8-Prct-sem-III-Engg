def Add():
    for i in range(0, m):
        for j in range(0, n):
            C[i][j] = A[i][j] + B[i][j]
    display(C)


def Sub():
    for i in range(0, m):
        for j in range(0, n):
            C[i][j] = A[i][j] - B[i][j]
    display(C)


def Mul():
    for i in range(0, m):
        for j in range(0, q):
            for k in range(0, n):
                C[i][j] = C[i][j] + A[i][k] * B[k][j]
    display(C)


def TransposeA():
    for i in range(0, m):
        for j in range(0, n):
            C[i][j] = A[j][i]
    display(C)


def TransposeB():
    for i in range(0, m):
        for j in range(0, n):
            C[i][j] = B[j][i]
    display(C)


def display(C1):
    for i in range(0, m):
        print('\n')
        for j in range(0, n):
            print(' ', C1[i][j], end=" ")


m = int(input('Enter no. of rows for Matrix 1:'))
n = int(input('Enter no. of columns for Matrix 1:'))
A = [[0 for j in range(0, n)] for i in range(0, m)]
print('Enter Elements of Matrix A')
for i in range(0, m):
    for j in range(0, n):
        A[i][j] = int(input('\nEnter element A{}{}:'.format(i, j)))
display(A)

p = int(input('\nEnter no. of rows for Matrix 2:'))
q = int(input('\nEnter no. of columns for Matrix 2:'))
B = [[0 for j in range(0, q)] for i in range(0, p)]
print('\nEnter Elements of Matrix B')
for i in range(0, p):
    for j in range(0, q):
        B[i][j] = int(input('\nEnter element B{}{}:'.format(i, j)))
display(B)

C = [[0 for j in range(0, n)] for i in range(0, m)]
if m == p and n == q:
    print('\nAddition of  Matrix is:')
    Add()
else:
    print('Matrices cannot be Added')

if m == p and n == q:
    print('\nSubstarction of  Matrix is:')
    Sub()
else:
    print('Matrices cannot be Subtracted')
if n == p:
    print('\nMultiplication  of  Matrix is:')
    Mul()
else:
    print('Matrices cannot be Multiplied')
print('\nTranspse of  Matrix A is:')
TransposeA()