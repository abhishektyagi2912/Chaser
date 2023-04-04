#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = data;
        this->left = NULL; // this is binary trre that has one node in starting
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) // to destroy the data mtlb end krne k liye node ko
    {
        return NULL;
    }

    cout << "enter data for inserting at left" << endl;
    root->left = buildTree(root->left);
    cout << "enter data for inserting at right" << endl;
    root->right = buildTree(root->right);

    return root;
}

void linearOrderTraversal(node *root)
{
    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp -> left)
        {
            q.push(temp->left);
        }
        if (temp-> right)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    linearOrderTraversal(root);

    return 0;
}