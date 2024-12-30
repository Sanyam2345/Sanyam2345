#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

    public:
    Rectangle () {
        length = breadth = 0;
    }
    Rectangle (int l, int b) {
        length = l;
        breadth = b;
    }
    int area ();
    int perimeter ();
    int getlength();
    int getbreadth();
};

int Rectangle::area() {
    return length * breadth;
}
int Rectangle::perimeter() {
    return 2*(length + breadth);
}
int Rectangle::getlength() {
    return length;
}
int Rectangle::getbreadth() {
    return breadth;
}

int main() {
    int l {0}, b{0};
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    Rectangle r (l,b);
    cout << "Perimeter = " << r.perimeter() << endl;
    cout << "Area = " << r.area() << endl;
    return 0;
}