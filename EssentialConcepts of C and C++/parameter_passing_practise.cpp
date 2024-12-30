#include <iostream>
using namespace std;

// void swap(int, int); // Pass by value
// void swap(int *, int *); // Pass by address
void swap(int &, int &); // Pass by reference

int main() {
    int a {10}, b{5};
    swap(a,b);
    // swap(&a,&b);
    cout << a << " " << b;
    return 0;
}

// void swap (int x, int y) {
//     int temp {x};
//     x = y;
//     y = temp;
// }

// void swap (int *x, int *y) {
//     int temp {*x};
//     *x = *y;
//     *y = temp;
// }

void swap (int &x, int &y) {
    int temp {x};
    x = y;
    y = temp;
}