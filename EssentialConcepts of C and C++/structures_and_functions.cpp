#include <iostream>
using namespace std;

struct Rectangle {
    int length, breadth;
};

void initialization (struct Rectangle *r,int l,int b) {
    r -> length;
    r -> breadth;
}

int area (struct Rectangle r) {
    return r.length * r.breadth;
}

void changelength (struct Rectangle *r, int l) {
    r -> length = l;
}

int main() {
    struct Rectangle r;
    int a;
    initialization(&r,10,5);
    a = area(r);
    changelength(&r,15);
    return 0;
}