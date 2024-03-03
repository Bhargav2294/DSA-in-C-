#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Queue
{
private:
    Node *front, *rear;

public:
    
    Queue()
    {
        front = rear = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (isEmpty())
        {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        Node *temp = front;
        front = front->next;

        if (front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
    }

    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return front->data;
    }

    
    void display()
    {
        
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        Node *current = front;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(20);

    q.display();

    q.dequeue();

    q.enqueue(10);

    q.display();

    cout << "Front element is " << q.getFront() << endl;

    q.dequeue();
    q.display();

    return 0;
}
