#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL; 
    } 
};

void insertathead(Node* &head,int d){

    //new node create
    Node* temp=new Node(d);
    temp -> next=head;
    head=temp;
}

void print(node* &head){

}

int main()
{
    node* node1= new node(10);
    node* node2 = new node(11);
    node1 -> next = node2;

    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    return 0;
}