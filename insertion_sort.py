A = [1, 8 , 1, 87, 2, 6]
n = len(A)
for j in range(1, n):
    key = A[j]
    i = j - 1
    while(i >=0 and key < A[i]):
        A[i+1] = A[i]
        i = i-1
    A[i+1] = key

print(A)
