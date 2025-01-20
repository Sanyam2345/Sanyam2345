#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l, j = h;
    do {
        do{ i++;} while (A[i] <= pivot);
        do{ j--; } while (A[j] > pivot);
        if (i < j) swap(&A[i], &A[j]);
    } while (i < j);
    swap(&A[l], &A[j]);
    return j;
}

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
}

void QuickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}

int main()
{
    int A[] = {5, 4, 2, 3, 6, 8, 1, 9, 7}, l = 0, h = 9;
    display(A, 9);
    QuickSort(A, l, h);
    display(A, 9);
    return 0;
}