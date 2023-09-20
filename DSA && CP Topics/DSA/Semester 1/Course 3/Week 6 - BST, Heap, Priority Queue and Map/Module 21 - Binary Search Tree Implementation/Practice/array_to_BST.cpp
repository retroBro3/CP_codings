#include <bits/stdc++.h>
using namespace std;

class BTnode
{
public:
    int data;
    BTnode *leftChild, *rightChild;

    BTnode(int data)
    {
        this->data = data;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }
};

BTnode *inputTree()
{
    /// the value decides whether or not the root node
    /// should place into the tree
    /// if the value is -1 then it shouldn't otherwise it should
    int value;
    cin >> value;
    BTnode *root = nullptr;

    if (value > 0)
        root = new BTnode(value);

    queue<BTnode *> treeNodes;
    if (root)
        treeNodes.push(root);

    while (!treeNodes.empty())
    {
        BTnode *current = treeNodes.front();

        /// input child nodes
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        BTnode *left = nullptr, *right = nullptr;
        if (leftVal > 0)
            left = new BTnode(leftVal);
        if (rightVal > 0)
            right = new BTnode(rightVal);

        /// connect the childs to root
        current->leftChild = left;
        current->rightChild = right;

        /// remove the current front
        treeNodes.pop();

        /// push child nodes into the queue if exists
        if (left)
            treeNodes.push(left);
        if (right)
            treeNodes.push(right);
    }

    return root;
}

BTnode *makeBT(int *arr, int n, int l, int r)
{
    int mid = l + (r - l) / 2;
    BTnode *root = new BTnode(arr[mid]);
    BTnode *leftNode = makeBT(arr, n, l, mid - 1);
    BTnode *rightNode = makeBT(arr, n, mid + 1, r);
    root->leftChild;
}

int main()
{
    /// to convert an array (sorted) into a BST
    /// first we would take up first middle value and place it as
    /// a root node of the BST

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    BTnode *root = makeBT();

    return 0;
}