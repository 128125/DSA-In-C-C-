#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // Properties
public:
    int *arr;
    int top;
    int size;

    // Behaviour
    Stack(int size)
    {
        this->size = size;
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

            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {

            cout << "Stack UnderFloew" << endl;
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
            cout << "Stack is Empty" << endl;
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
    Stack st(5);

    st.push(23);
    st.push(44);
    st.push(43);

    cout << st.peek() << endl;

    st.top();

    cout << st.peek() << endl;

    st.top();

    cout << st.peek() << endl;

    st.top();

    cout << st.peek() << endl;
    
    return 0;
}