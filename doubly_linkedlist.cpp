#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *prev;
    node *next;

    node(int element){
        data=element;
        prev=nullptr;
        next=nullptr;
    }
};

class doublyLinkedlist{
    node *head;
    node *tail;

public:
    doublyLinkedlist(){
        head=nullptr;
        tail=nullptr;
    };

    void insertatfront(int data)
    {
        node *newnode=new node(data);
        if(!head){
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }

    void insertatend(int data)
    {
        node *newnode=new node(data);
        if(!head){
            head=newnode;
            tail=newnode;    
        }
        else{
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
    }

    void deletelastnode()
    {
        if(!head)
            return;

        if(head==tail){
            delete head;
            head=nullptr;
            tail=nullptr;
        }
        else{
            node *temp=tail;
            tail=tail->prev;
            tail->next=nullptr;
            delete temp;
        }
    }

    void deletebeforeposition(int position)
    {
        if(!head || position<=1)
            return;

        node *temp=head;
        for(int i=1;i<position;i++)
        {
            if(temp->next)
                temp=temp->next;
            else
                return;
        }

        if(temp->prev)
        {
            node *prevnode=temp->prev;
            if(prevnode==head)
                head=temp;
            else{
                prevnode->prev->next=temp;
                temp->prev=prevnode->prev;
            }
            delete prevnode;
        }
    }

    void display()
    {
        node *temp=head;
        while(temp!=nullptr)
        {
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};

int main(){
    doublyLinkedlist dl;

    dl.insertatfront(2);
    dl.insertatend(3);

    dl.display();

    dl.insertatfront(1);
    dl.insertatfront(0);
    dl.insertatend(4);

    dl.display();

    dl.deletelastnode();

    dl.display();

    dl.deletebeforeposition(3);

    dl.display();

    return 0;
}