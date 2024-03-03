#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int value){
        data=value;
        next=nullptr;
    }
};

class CircularLinkedlist{
private:
    node *head;

public:
    CircularLinkedlist(){
        head=nullptr;
    }

    void insertatend(int data){
        node *newnode=new node(data);

        if(!head){
            newnode->next=newnode;
            head=newnode;
        }
        else{
            node *temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
        }
    }

    void insertbeforeposition(int pos,int data){
        node *newnode=new node(data);

        if(!head){
            head=newnode;
            newnode->next=head;
        }
        else{
            if(pos==1){
                newnode->next=head;
                node *temp=head;
                while(temp->next!=head)
                    temp=temp->next;
                
                temp->next=newnode;
                head=newnode;
            }
            else{
                node *temp=head;
                for(int i=1;i<pos-1;i++)
                    temp=temp->next;
                
                newnode->next=temp->next;
                temp->next=newnode;
            }
        }
    }

    void deletefirstnode(){
        if(!head){
            cout << "Linkedlist is underflow" << endl;
            return;
        }
        node *temp=head;
        if(head->next==head)
            head = nullptr;
        else{
            while(temp->next!=head)
                temp=temp->next;
            temp->next=head->next;
            head=head->next;
        }
        delete temp;
    }

    void deleteafterposition(int position){
        if(!head){
            cout << "Linkedlist is underflow." << endl;
            return;
        }

        node *temp=head;

        for(int i=1;i<position;i++)
            temp=temp->next;

        node *nodetodelete=temp->next;
        if (!nodetodelete)
        {
            cout << "Position does not exist." << endl;
            return;
        }

        if (nodetodelete == head)
            head = nullptr;
        else
            temp->next = nodetodelete->next;
            
        delete nodetodelete;
    }

    void display(){
        if(!head){
            cout << "Circular Linkedlist is empty" << endl;
            return;
        }

        node *temp=head;
        do{
            cout << temp->data << " ";
            temp=temp->next;
        } while(temp!=head);

        cout << endl;
    }
};

int main()
{
    CircularLinkedlist cl;

    cl.insertatend(1);
    cl.insertatend(3);
    cl.insertatend(4);
    cl.insertbeforeposition(3,2);

    cl.display();
         
    cl.insertatend(6);
    cl.insertbeforeposition(6,5);

    cl.display();

    cl.deletefirstnode();

    cl.display();

    cl.deleteafterposition(5);

    cl.display();
    return 0;
}

