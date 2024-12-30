#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle * func2() {
    struct Rectangle *ptr;
    ptr = new struct Rectangle;
    ptr->length = 16;
    ptr->breadth = 7;
    return ptr;
}

// Call by Value
// void func(struct Rectangle rec) {
//     cout << "Length " << rec.length << endl << "Breadth " << rec.breadth << endl;
// }

// Call By Address
void fun(struct Rectangle *rec) {
    cout << "Length " << rec->length << endl << "Breadth " << rec->breadth << endl;
    rec->length = 15;
    rec->breadth = 10;
}

int main() {
    struct Rectangle r {10,5};
    // func(r); // Call by Value
    // fun(&r); // Call by Address
    // cout << "Length " << r.length << endl << "Breadth " << r.breadth << endl;
    struct Rectangle *p;
    p = func2();
    cout << "Length " << p->length << endl << "Breadth " << p->breadth << endl;
    return 0;
}