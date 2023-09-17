#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *leftChild;
    Node *rightChild;

    Node(int data)
    {
        this->data = data;
        leftChild = nullptr;
        rightChild = nullptr;
    }
};

Node *inputTree()
{
    int rootData;
    cin >> rootData;

    Node *root = nullptr;
    if (rootData > 0)
        root = new Node(rootData);

    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *parent = qu.front();
        int l, r;
        cin >> l >> r;

        if (l > 0)
        {
            Node *left = new Node(l);
            /// connect with the parent
            parent->leftChild = left;
            qu.push(left);
        }
        if (r > 0)
        {
            Node *right = new Node(r);
            parent->rightChild = right;
            qu.push(right);
        }

        qu.pop();
    }

    return root;
}

void levelOrderTraverse(Node *root)
{
    if (!root)
    {
        cout << "Tree is empty\n";
        return;
    }

    queue<Node *> treeNodes;
    treeNodes.push(root);

    while (!treeNodes.empty())
    {
        Node *currentNode = treeNodes.front();
        cout << currentNode->data << ' ';

        treeNodes.pop();

        if (currentNode->leftChild)
            treeNodes.push(currentNode->leftChild);
        if (currentNode->rightChild)
            treeNodes.push(currentNode->rightChild);
    }
}

int main()
{

    Node *tree = nullptr;

    /// total input: 2 * n + 1,
    /// 0 for non existing childs
    /// > 0 for existing childs

    tree = inputTree();
    levelOrderTraverse(tree);

    return 0;
}