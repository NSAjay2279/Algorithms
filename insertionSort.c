#include <stdio.h>

int main()
{
    int A[] = {9, 8, 7, 6, 5, 4, 1};
    int n = sizeof(A) / sizeof(A[0]);

    for (int j = 1; j < n; j++)
    {
        int key = A[j];
        int i = j - 1;
        while (i >= 0 && key < A[i])
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }

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
}