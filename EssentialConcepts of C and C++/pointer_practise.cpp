#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // int a {10};
    int *p;
    // p = &a;
    // cout << a << endl << *p << endl;

    p = new int[5]; // C++ Style
    p = (int*)malloc(5*sizeof(int)); // C Style
    p[0] = 1, p[1] = 2, p[2] = 3, p[3] = 4, p[4] = 5;
    for (int l {0}; l < 5; l++)
        cout << p[l] << endl;
    delete [] p; // Should delete our memory storage when not in use specially in long programs and data structures in C++
    free(p); // deletion in C language
    return 0;
}