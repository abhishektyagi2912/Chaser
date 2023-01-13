#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    // create constructor
    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

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

void insertathead(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(node *&head, node *&tail, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertatposition(node *&head, node *&tail, int pos, int d)
{
    // this is because the code is not run when the 1st pos is call
    if (pos == 1)
    {
        insertathead(head, tail, d);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next; // temp reached the destination
        count++;
    }

    // insert at last position
    if (temp->next == NULL)
    {
        insertattail(head, tail, d);
        return;
    }
    // create a new node for d
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

// give length of linked list
int getlength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    // node *node1 = new node(10);  // if our program is empty in starting
    // node *head = node1;
    // node *tail = node1;
    node *head = NULL;
    node *tail = NULL;
    // print(head);
    // cout << "Length of the LL is " << getlength(head) << endl;

    insertathead(head, tail, 9);
    print(head);
    insertattail(head, tail, 11);
    print(head);
    cout << "Length of the LL is " << getlength(head) << endl;

    insertatposition(head, tail, 3, 12);
    print(head);
    cout << "Length of the LL is " << getlength(head) << endl;

    return 0;
}