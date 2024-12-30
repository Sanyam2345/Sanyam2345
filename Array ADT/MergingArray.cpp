#include <iostream>
using namespace std;

class Array {
    public:
    int A[10];
    int size;
    int length;

    void Display () {
        cout << "Elements are: " << endl;
        for (size_t i {0}; i < length; i++)
            cout << A[i] << " ";
        cout << endl;
    }
    
};

Array *Merge(Array *arr1, Array *arr2) {
        int i,j,k;
        i = j = k = 0;
        Array *arr3 = new Array;
        while (i < arr1->length && j < arr2->length) {
            if (arr1->A[i] < arr2->A[j])
                arr3->A[k++] = arr1->A[i++];
            else
                arr3->A[k++] = arr2->A[j++];
        }
        for (;i < arr1->length;i++)
            arr3->A[k++] = arr1->A[i];
        for (;j < arr2->length;j++)
            arr3->A[k++] = arr2->A[j];
        arr3->length = arr1->length + arr2->length;
        arr3->size = 10;
        return arr3;
}

int main () {
    Array arr1 {{2,9,21,28,35},10,5};
    Array arr2 {{2,3,16,18,28},10,5};
    Array *arr3;
    arr3 = Merge(&arr1,&arr2);
    arr3->Display();
    return 0;
}