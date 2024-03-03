#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class binarytree
{
private:
    node *root;

    void insertnode(node *&curnode, int val)
    {
        if (curnode == nullptr)
        {
            curnode = new node(val);
            return;
        }

        if (val < curnode->data)
            insertnode(curnode->left, val);
        else
            insertnode(curnode->right, val);
    }

    void inordertraversal(node *curnode)
    {
        if (curnode == nullptr)
            return;

        inordertraversal(curnode->left);
        cout << curnode->data << " ";
        inordertraversal(curnode->right);
    }

    void preordertraversal(node *curnode)
    {
        if(curnode == nullptr)
            return;

        cout << curnode->data << " ";
        preordertraversal(curnode->left);
        preordertraversal(curnode->right);
    }

    void postordertraversal(node *curnode)
    {
        if (curnode == nullptr)
            return;

        postordertraversal(curnode->left);
        postordertraversal(curnode->right);
        cout << curnode->data << " ";
    }

public:
    binarytree()
    {
        root = nullptr;
    }

    void insert(int val)
    {
        insertnode(root, val);
    }

    void inorderTraversal()
    {
        inordertraversal(root);
        cout << endl;
    }

    void preorderTraversal()
    {
        preordertraversal(root);
        cout << endl;
    }

    void postorderTraversal()
    {
        postordertraversal(root);
        cout << endl;
    }
};

int main()
{
    binarytree bt;

    bt.insert(2);
    bt.insert(7);
    bt.insert(4);
    bt.insert(6);
    bt.insert(5);
    bt.insert(1);
    bt.insert(3);
    cout << "In order traversal: ";
    bt.inorderTraversal();
    cout << endl;

    cout << "Pre order traversal: ";
    bt.preorderTraversal();
    cout << endl;

    cout << "Post order traversal: ";
    bt.postorderTraversal();
    cout << endl;

    return 0;
}
