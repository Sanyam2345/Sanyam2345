#include <iostream>
using namespace std;

// void fun(int A [], int n);
int * fun2(int size);

int main() {
    // int A[5] = {2,4,6,8,10};
    // fun(A,5);
    int *p, size {5};
    p = fun2(size);
    for (int i = 0; i < size; i++)
        cout << p[i] << " ";
    return 0;
}
// void fun (int A[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << A[i] << " ";
//     cout << endl;
//     for (int i = 0; i < n; i++)
//         A[i] = i + 1;
//     for (int i = 0; i < n; i++)
//         cout << A[i] << " ";
// }
int * fun2(int size) {
    int *ptr = new int [size];
    for (int i = 0; i < size; i++)
        ptr[i] = i + 1;
    return ptr;
}