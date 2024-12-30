#include <iostream>
using namespace std;

struct Rectangle {
    int length, breadth;
};

void inbitialize (struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int area (struct Rectangle r) {
    return r.length * r.breadth;
}

int perimeter (struct Rectangle r) {
    return (2*(r.length + r.breadth));
}

int main() {
    int l {0}, b {0};
    cout << "Enter length and breadth respectively: ";
    cin >> l >> b;
    struct Rectangle r;
    inbitialize (&r,l,b);
    cout << "Area of Rectangle = " << area(r) << endl <<"Perimeter of Rectangle = " << perimeter(r) << endl;
    return 0;
}