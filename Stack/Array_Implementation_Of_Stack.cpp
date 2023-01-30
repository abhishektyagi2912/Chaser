#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        // allocate new memory to the array
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow " << endl;
        }
    }
    void pop()
    {
        // at least one element is their to pop thew element
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack st(5);

    st.push(22);
    st.push(23);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop(); //  return stack is empty

    cout << st.peek() << endl;  // return -1 
    return 0;
}