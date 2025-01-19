#include <stdio.h>

void Display (int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void InsertionSort (int A[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i-1;
        int x = A[i];
        while (A[j] > x && j > -1) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main() {
    int A[] = {8,7,6,5,4,3,2,1,0}, n = 9;
    Display(A,n);
    InsertionSort(A,n);
    Display(A,n);
    return 0;
}