#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insertBst(node *root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertBst(root->right, d);
    }
    else
        root->left = insertBst(root->left, d);

    return root;
}

void takeinput(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertBst(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // because root node has only one node [root,NULL] are their

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

node *minval(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

node *maxval(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

int main()
{
    node *root = NULL;
    takeinput(root);
    levelOrderTraversal(root);

    return 0;
}