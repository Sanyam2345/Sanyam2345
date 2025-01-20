#include <stdio.h>
#include <stdlib.h>

int findmax(int A[], int n) {
    int max = A[0];;
    for (int i = 0; i < n; i++) {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

void Display (int A[], int n) {
    for (int i = 0; i < n; i++ ) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Count_Sort(int A[], int n) {
    int max, i, j;
    int *c;
    max = findmax(A,n);
    c = (int *)malloc((max+1) * sizeof(int));
    for (i = 0; i < max + 1; i++) {
        c[i] = 0;
    }
    for (i = 0; i < n; i++) {
        c[A[i]]++;
    }
    i = 0; j = 0;
    while (i < max+1)
    {
        if (c[i] > 0) {
            A[j++] = i;
            c[i]--;
        }
        else 
            i++;
    }
}

int main() {
    int A[] = {5,5,2,2,2,18,20,0}, n = 8;
    Display(A,n);
    Count_Sort(A,n);
    Display(A,n);
    return 0;
}