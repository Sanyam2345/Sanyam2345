#include <stdio.h>
#include <stdlib.h>

void Display(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Merge (int A[], int l, int mid, int h) {  // Merging two lists
    int i,j,k;
    int *B = (int *)malloc((h+1) * sizeof(int));
    i = l; j = mid + 1; k = l;
    while (i <= mid && j <= h) {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else 
            B[k++] = A[j++];
    }
    for (; i<=mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++) A[i] = B[i];
    free(B);
}

void IMergeSort(int A[], int n) {  // [Iterative Merge Sort]  Average Time COmplexity = O(nlogn)
    int i,p,l,mid,h;
    for (p = 2; p <= n; p = p*2) {
        for (i = 0; i+p-1<n; i = i+p) {
            l = i;
            h = i + p -1;
            mid = (l + h)/2;
            Merge(A,l,mid,h);
        }
    }
    if (p/2 < n)
        Merge(A,0,p/2,n-1);
}

void RMergeSort (int A[], int l, int h) { // [Recursive Merge Sort]  Average Time Complexity = O(nlogn)
    if (l < h) {
        int mid = (l + h)/2;
        RMergeSort(A,l,mid);
        RMergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}

int main() {
    int A[] = {2,5,4,3,7,6,8,1}, n = 8, l = 0, h = 7;
    Display(A,n);
    RMergeSort(A,l,h);
    Display(A,n);
    return 0;
}