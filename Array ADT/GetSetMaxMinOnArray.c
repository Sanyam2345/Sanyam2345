#include <stdio.h>
struct Array {
    int A[10];
    int size;
    int length;
};
void Display (struct Array arr) {
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ",arr.A[i]);
    printf("\n");
}
void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Get (struct Array arr, int index) {
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
void Set (struct Array *arr,int index, int x) {
    if (index >= 0 && index < arr->length)
        arr ->A[index] = x;
}
int Max (struct Array arr) {
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] > max)
            max = arr.A[i];
    return max;
}
int Min (struct Array arr) {
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] < min)
            min = arr.A[i];
    return min;
}
int Sum (struct Array arr) {
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
        sum += arr.A[i];
    return sum;
}
float Avg(struct Array arr) {
    return (float)Sum(arr)/arr.length;
}
int main () {
    struct Array arr1 = {{2,3,4,1,5,6,9,7},10,8};
    printf("%d\n",Get(arr1,4));
    Set(&arr1,4,10);
    Display(arr1);
    printf("%d\n",Max(arr1));
    printf("%d\n",Min(arr1));
    printf("%d\n",Sum(arr1));
    printf("%.2f\n",Avg(arr1));
    return 0;
}