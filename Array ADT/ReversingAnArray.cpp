#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
    public:
    int A[10];
    int size;
    int length;
};
void Display (Array arr) {
    for (size_t i = 0; i < arr.length; i++) 
        cout << arr.A[i] << " ";
    cout << endl;
}
void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Reverse (Array *arr) {
    int *B;
    int i,j;
    B = new int [arr->length];
    for (i = 0, j  = arr->length-1; i < j; i++, j--)
        swap(&arr->A[i], &arr->A[j]);
}

int main () {
    Array arr1 {{1,2,3,4,5,6,7,8,9},10,9};
    Reverse(&arr1);
    Display(arr1);
    return 0;
}