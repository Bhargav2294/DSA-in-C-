#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int sizeQ;
    int size;

public:
    Queue(int sizeQ)
    {
        this->sizeQ = sizeQ;
        arr = new int[sizeQ];
        front = rear = -1;
        size = 0;
    }

    bool isFull()
    {
        return (size == sizeQ);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void enqueue(int element)
    {
        if (isEmpty())
        {
            front = rear = 0;
        }
        else if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else
        {
            rear = (rear + 1);
        }
        arr[rear] = element;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1);
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = front; i != rear + 1; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            cout << "Peak element is: " << arr[front] << endl;
        }
    }
};

int main()
{

    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.peek();

    q.dequeue();
    q.dequeue();

   
    q.display();

    q.peek();

    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);

    q.display();

    return 0;
}