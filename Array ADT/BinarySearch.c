#include <stdio.h>
struct Array {
    int A[10];
    int size;
    int length;
};
void Display (struct Array arr) {
    for (int i = 0; i < arr.length; i++)
        printf("%d ",arr.A[i]);
    printf("\n");
}
void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int BinarySearch (struct Array *arr, int key) {
    int l,mid,h;
    l = 0;
    h = arr->length-1;
    while (l <= h) {
        mid = (l+h)/2;
        if(key == arr->A[mid])
            return mid;
        else if (key < arr->A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main () {
    struct Array arr1  = {{1,3,5,7,9,11,13,15},10,8};
    printf("%d\n",BinarySearch(&arr1,15));
    Display(arr1);
    return 0;
}
