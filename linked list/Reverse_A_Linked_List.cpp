#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert(node *head, int d)
{
    node *temp = new node(d); // create new node which name is temp
    temp->next = head;
    head = temp;
}

void reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        curr = forward;
        prev = curr;
    }
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{

    node *node1 = new node(10);
    node *head = node1;
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    reverse(head);
    print(head);
    return 0;
}