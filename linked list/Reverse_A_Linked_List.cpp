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
void insert(node *&head, int d)
{
    node *temp = new node(d); // create new node which name is temp
    temp->next = head;
    head = temp;
}

void reverses(node *&head)
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
// anothe way
node *reverse(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return rest;
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
    print(head);
    head = reverse(head); // this is the way recursion function works
    print(head);
    reverses(head);
    print(head);
    return 0;
}