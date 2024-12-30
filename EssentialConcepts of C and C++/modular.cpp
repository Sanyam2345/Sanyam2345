#include <iostream>
using namespace std;

int area (int l, int b) {
    return l*b;
}

int perimeter (int l, int b) {
    int p {2*(l+b)};
    return p;
}

int main() {
    int length {0}, breadth {0};
    cout << "Enter length and breadth respectively: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle = " << area(length,breadth) << endl;
    cout << "Perimeter of Rectangle = " << perimeter(length,breadth) << endl;
    return 0;
}