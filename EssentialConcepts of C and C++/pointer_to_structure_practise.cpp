#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // Rectangle r {10,5};
    // Rectangle *p = &r;
    // // in variable form
    // cout << r.length << endl;
    // cout << r.breadth << endl;
    // // in pointer form
    // (*p).length = 15;
    // (*p).breadth = 9;
    // //OR
    // cout << p -> length << endl;
    // cout << p -> breadth << endl;

    // Pointer to structure in heap
    Rectangle *p;
    p = new Rectangle;
    p ->length = 14;
    p -> breadth = 56;
    return 0;
}