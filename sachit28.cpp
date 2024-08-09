#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int n;

public:
    // Constructor to initialize stack
    Stack(int size) {
        n = size;
        arr = new int[n]; // Dynamic memory allocation
        top = -1; // Initialize top to -1 to indicate an empty stack
    }

    // Push function to add an element to the stack
    void push(int value) {
        if (top == n - 1) {
            cout << "Stack is full" << endl;
        } else {
            top++;
            arr[top] = value;
        }
    }

    // Get function to print the stack elements
    void get() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl; // To move to the next line after printing all elements
        }
    }

    // Destructor to free the memory allocated for the stack
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack stack1(5);
    stack1.push(5);
    stack1.push(4);
    stack1.push(3);
    stack1.push(2);
    stack1.push(1);
    stack1.push(0); // This will show "Stack is full" because the stack size is 5 
    stack1.get();

    return 0;
}