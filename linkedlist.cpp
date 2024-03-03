#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
    private:
    Node* head;

    public:

    LinkedList() : head(nullptr) {}

    void insertAtFront(int data)
    {
        Node *newNode = new Node();

        newNode->data = data;
        newNode->next = head;

        head = newNode;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node();

        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insert_in_ascending_order(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;

        if (head == nullptr || head->data >= data)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *current = head;

            while (current->next != nullptr && current->next->data < data)
            {
                current = current->next;
            }

            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void deleteFirstNode()
    {
        if (head == nullptr)
        {
            cout << "Linkedlist is underflow" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteNodeBeforePosition(int position)
    {
        if (position <= 1 || head == nullptr || head->next == nullptr)
        {
            cout << "No node to delete before the specified position." << endl;
            return;
        }
        Node *current = head;
        for (int i = 1; current != nullptr && i < position - 1; i++)
        {
            current = current->next;
        }
        if (current == nullptr || current->next == nullptr)
        {
            cout << "No node to delete before the specified position." << endl;
            return;
        }
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void deleteNodeAfterPosition(int position)
    {
        if (head == nullptr)
        {
            cout << "Linkedlist is underflow." << endl;
            return;
        }

        Node *current = head;
        
        for (int i = 1; current != nullptr && i < position; i++)
        {
            current = current->next;
        }

        if (current == nullptr || current->next == nullptr)
        {
            cout << "No node to delete after the specified position." << endl;
            return;
        }

        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l;

    l.insertAtFront(9);
    l.insertAtFront(4);
    l.insertAtEnd(11);
    l.insertAtFront(2);
    l.insertAtEnd(13);
    l.insert_in_ascending_order(7);
    l.printList(); 

    l.deleteFirstNode();
    l.printList();

    l.deleteNodeBeforePosition(3);
    l.printList();

    l.deleteNodeAfterPosition(1);
    l.printList(); 
    return 0;
}
