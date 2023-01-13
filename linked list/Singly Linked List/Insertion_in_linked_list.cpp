// in this code all deleteion, insertion are held
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

void insertathead(node *&head, int d)
{
    node *temp = new node(d); // create new node which name is temp
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertatposition(node *&tail, node *&head, int pos, int d)
{
    // this is because the code is not run when the 1st pos is call
    if (pos == 1)
    {
        insertathead(head, d);
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
        insertattail(tail, d);
        return;
    }
    // create a new node for d
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void deletenode(node *&head, node *&tail, int pos)
{
    // head
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *prev = NULL;
        node *curr = head;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL; // to delte this node
        delete curr;

        // place tail at rigth position
        if (prev->next == NULL)
        {
            tail = prev;
        }
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
    // create new node
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    node *head = node1;
    node *tail = node1;

    /// insert at head
    // insertathead(head, 20);
    // insertathead(head, 40);
    // insertathead(head, 30);
    // print(head);

    /// insert at tail
    insertattail(tail, 20);
    insertattail(tail, 40);
    insertattail(tail, 30);
    print(head);

    /// insert at position
    insertatposition(tail, head, 3, 45);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deletenode(head, tail, 4);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}