#include <stdio.h>

void BubbleSort(int A[], int n) {
    int flag;
    for (int i = 0; i < n-1; i++) {
        flag = 0;
        for (int j = 0; j < n-1-i; j++) {
            if (A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

void Display(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {2,5,9,3,4,6};
    Display(A,6);
    BubbleSort(A,6);
    Display(A,6);
    return 0;
}