#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack{

public:
    Node *top;

    Stack()
    {
        top = nullptr;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
        cout << "pushed element is:" << data << endl;
    }

    void pop()
    {
        if (top==nullptr)
        {
            cout << "Stack is underflow" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        cout << "poped element is:" << temp->data << endl;
        delete temp;
    }

    int peek()
    {
        if(top==nullptr)
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }
};

int main()
{
    Stack s;

    s.push(80);
    s.push(113);
    s.push(7);
    s.push(45);

    cout << "Top element is:" << s.peek() << endl;
    s.pop();
   
    cout << "Top element is:" << s.peek() << endl;
     
    return 0;
}
