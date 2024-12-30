#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length, breadth;

    Rectangle (int l, int b) {
        length = l;
        breadth = b;
    }
    int area () {
        return length * breadth;
    }
    void changelength (int l) {
        length = l;
    }
};

int main() {
    Rectangle r (10,5);
    int a {r.area()};
    r.changelength(12);
    cout << "Area is " << a << endl;
    cout << "New length is " << r.length << endl;
    return 0;
}