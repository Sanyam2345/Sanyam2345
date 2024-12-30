#include <iostream>
using namespace std;

int main() {
    int length {0}, breadth {0};
    cout << "Enter the length and breadth of rectangle respectively: ";
    cin >> length >> breadth;
    int area {length*breadth};
    int perimeter {2*(length+breadth)};
    cout << "Area of Rectangle = " << area << endl << "Perimeter of Rectangle = " << perimeter << endl;
    return 0;
}