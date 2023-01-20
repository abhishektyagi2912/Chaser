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
    // if the starting point is zero then we applay if condition see in doubly linked list
    node *temp = new node(d); // create new node which name is temp
    temp->next = head;
    head = temp;
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
    /// insert at head
    insertathead(head, 20);
    insertathead(head, 40);
    insertathead(head, 30);
    print(head);

    return 0;
}