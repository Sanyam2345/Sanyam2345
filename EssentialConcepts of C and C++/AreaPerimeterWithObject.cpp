#include <iostream>
using namespace std;

class Rectangle {
    public:
    int length, breadth;

    void initialization (int l, int b) {
        length = l;
        breadth = b;
    }
    int area () {
        return length * breadth;
    }
    int perimeter () {
        return (2*(length + breadth));
    }
};

int main() {
    Rectangle r = {0,0};
    int l {0}, b{0};
    cout << "Enter length and breadth respectively: ";
    cin >> l >> b;
    r.initialization(l,b);
    cout << "Area of Rectangle = " << r.area() << endl << "Perimeter of Rectangle = " << r.perimeter() << endl;
    return 0;
}