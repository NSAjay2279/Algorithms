A = [9, 8, 7 ,6 , 5, 4, 1]  # reverse sorted input pattern
n = len(A)
for j in range(1, n):
    key = A[j]
    i = j - 1
    while(i >=0 and key < A[i]):
        A[i+1] = A[i]
        i = i-1
    A[i+1] = key

print(A)    
# theta(n^2) - worst case runtime
# theta(n) - best case runtime

