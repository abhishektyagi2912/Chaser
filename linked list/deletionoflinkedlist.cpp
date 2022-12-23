#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
// head dlt
void deleteatheead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}
// delete an element at random
void deleteanelement(node *&head, int val)
{
    // if our list is empty then we apply a checker
    if (head == NULL)
    {
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
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
    node *head = NULL;
    insertattail(head, 2);
    insertattail(head, 1);
    insertattail(head, 3);
    display(head);
    deleteanelement(head, 3);
    display(head);
    deleteatheead(head);
    display(head);

    return 0;
}