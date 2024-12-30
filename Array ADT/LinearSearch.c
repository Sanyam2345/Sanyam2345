#include <stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};
void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int LinearSearch (struct Array *arr, int key) {
    int i;
    for (i = 0; i < arr->length; i++) {
        if (key == arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
}
int main () {
     struct  Array arr = {{2,4,6,8,5,1,3,7},10,8};
    printf("%d",LinearSearch(&arr,8));
    return 0;
}