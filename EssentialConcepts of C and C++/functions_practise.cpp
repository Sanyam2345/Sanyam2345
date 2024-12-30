#include <iostream>
using namespace std;

int add(int, int);

int main() {
    int x {9},y{6},z {add(x,y)};
    cout << z;
    return 0;
}

int add( int a, int b) {
    int c {a + b};
    return c;
}