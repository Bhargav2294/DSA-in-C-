#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;                               
    }

    void push(int element){
         if(size-top > 1){
            top++;
            arr[top]=element;
            cout << "pushed element is " << arr[top] << endl;   
         }
         else{
            cout << "stack overflow " << endl;
         }
    }
    
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "stack underflow " << endl;
        }
    }

    int peek(){
        if(top>=0){
            cout << "top element is " << arr[top] << endl;
        }
        else{
            cout << "stack is empty " << endl;
            return -1;
        }
    }

    void display(){
        if(top>=0 & top<5){
            cout << "whole stack " << endl;

            for(int top=0;top<5;top++){
               cout << arr[top] << endl;
            }
        }
    }
};

int main(){

    Stack st(5);

    st.push(25);
    st.push(50);
    st.push(100);
    st.push(200);
    st.push(300);

    st.push(300);

    st.display();

    return 0;
}