#include <stdio.h>

void Display(int A[], int n) {
    printf("Array elements are: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort (int A[], int n) {
    int i,j,k;
    for (i = 0; i < n-1; i++) {
        for (j = k = i; j < n; j++ ) {
            if (A[j] < A[k])
                k = j;
        }
        swap (&A[i], &A[k]);
    }
}

int main() {
    int A[] = {10,9,8,7,6,5,4,3,2,1}, n = 10;
    Display(A,n);
    SelectionSort(A,n);
    Display(A,n);
    return 0;
}