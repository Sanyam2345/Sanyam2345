#include <iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};


int main() {
    struct Rectangle r {10,5};
    // cout << sizeof(r) << endl;
    cout << r.length << endl;
    cout << r.breadth << endl;
    cout << "Area of Rectangle = " << (r.length*r.breadth) << endl;
    return 0;
}