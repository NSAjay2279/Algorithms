#include <stdio.h>

void merge(int *A, int *L, int *R)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = sizeof(L) / sizeof(L[0]);
    int r = sizeof(R) / sizeof(L[0]);
    while (i < l && j < r)
    {
        if (L[i] < R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < l)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < r)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int n, int *A)
{
    if (n <= 1)
    {
        return;
    }

    int L[n / 2];
    for (int i = 0; i < n / 2; i++)
    {
        L[i] = A[i];
    }

    int R[n - (n / 2)];
    for (int i = n / 2; i < n; i++)
    {
        R[i-(n/2)] = A[i];
    }

    mergeSort(n, L);
    mergeSort(n, R);
    merge(A, L, R);
}

int main()
{
    int A[] = {9, 8, 7, 6, 5, 4, 1};
    int n = sizeof(A) / sizeof(A[0]);

    mergeSort(n, A);

    printf("\[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}