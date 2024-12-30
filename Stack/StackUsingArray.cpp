#include <iostream>
using namespace std;
class Stack {
    public:
    int size;
    int top;
    int *S;
};
void create (Stack *st) {
    cout << "Enter size: ";
    cin >> st->size;
    st->top;
    st->S = new int [st->size];
}
void Display (Stack st) {
    for (size_t i {st.top}; i >= 0; i--)
        cout << st.S[i];
    cout << endl;
}
void push (Stack *st,int x) {
    if (st->top == st->size-1)
        cout << "Stack Overflow";
    else {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop (Stack *st) {
    int x = -1;
    if (st->top == -1)
        cout << "Stack Underflow" << endl;
    else
        x = st->S[st->top--];
    return x;
}
int peek (Stack st, int index) {
    int x = -1;
    if(st.top-index+1 < 0)
        cout << "Invalid Index" << endl;
    x = st.S[st.top-index+1];
    return 0;
}
int isEmpty (Stack st) {
    if (st.top == -1)
        return 1;
    return 0;
}
int isFull (Stack st) {
    return st.top = st.size-1;
}
int stackTop(Stack st) { 
    if(!isEmpty(st))
        return st.S[st.top];
    return -1;
}
int main () {
    Stack st;
    create (&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    cout << peek(st,2);
    Display(st);
    return 0;
}