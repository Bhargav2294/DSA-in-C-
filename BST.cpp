#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST
{
private:
    node *root;

    node *insertnode(node *root, int val)
    {
        if (root == nullptr)
            return new node(val);

        if (val < root->data)
            root->left = insertnode(root->left, val);
        else
            root->right = insertnode(root->right, val);

        return root;
    }

    void inordertraversal(node *root)
    {
        if (root == nullptr)
            return;

        inordertraversal(root->left);
        cout << root->data << " ";
        inordertraversal(root->right);
    }

public:
    BST()
    {
        root = nullptr;
    }

    void insert(int val)
    {
        root = insertnode(root, val);
    }

    void inorderTraversal()
    {
        inordertraversal(root);
        cout << endl;
    }
};

int main()
{
    BST bst;

    bst.insert(2);
    bst.insert(7);
    bst.insert(4);
    bst.insert(6);
    bst.insert(5);
    bst.insert(1);
    bst.insert(3);

    cout << "BST in inorder: ";
    bst.inorderTraversal();

    return 0;
}
