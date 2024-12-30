#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
    public:
    int A[10];
    int size;
    int length;
    void Display () {
        for (size_t i {0}; i < length; i++)
            cout << A[i] << " ";
    }
    bool isSorted () {
        bool flag = true;
        for (size_t i = 0; i < length-1; i++ )
            if (A[i] < A[i+1])
                flag = true;
            else 
                return false;
            return flag;
    }
};

int main () {
    Array arr {{1,2,3,4,5,6,7,8,9},10,9};
    cout << boolalpha;
    cout << arr.isSorted() << endl;
    arr.Display();
    return 0;
}