#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
private:
    int *arr;
    int front;
    int rear;
    int sizeQ;
    int size;

public:
    CircularQueue(int sizeQ)
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
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % sizeQ;
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
            front = (front + 1) % sizeQ;
        }
        size--;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = front;; i = (i + 1) % sizeQ)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
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

    CircularQueue q(5);

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

    q.peek();

    return 0;
}