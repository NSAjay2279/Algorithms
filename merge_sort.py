def merge(A, L, R):
   i = 0
   j = 0
   k = 0
   while i < len(L) and j < len(R):
      if L[i] < R[j]:
         A[k] = L[i]
         i += 1
      else:
         A[k] = R[j]
         j += 1
      k += 1

   while i < len(L):
      A[k] = L[i]
      i += 1
      k += 1

   while j < len(R):
      A[k] = R[j]
      j += 1
      k += 1

def mergeSort(A):
    n = len(A)
    if n <= 1:
        return
    
    L = A[0: n//2]
    R = A[n//2: n]

    mergeSort(L)
    mergeSort(R)
    merge(A, L, R)

A = [9, 8, 7, 6, 1, -1 , -98, -999]
mergeSort(A)
print(A)
