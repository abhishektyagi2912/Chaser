#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertelement(node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // Assume that we have an element to compare
        node *curr = tail;

        // search an element where we want to insert the data
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is represent that element
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node *tail)
{
    node *temp = tail;
    if (tail == NULL)
    {
        // empty case
        cout << "List Is Empty" << endl;
        return;
    }
    // in while loop loop we cant print the data if we have only one tail or node so
    // cout << temp->data << "->";
    // or we can use do while loop here
    do
    {
        cout << tail->data << "->";
        tail = tail->next;
    } while (tail != temp);

    cout << "NULL" << endl;
}
bool checkcircular(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return true;
    }
    else
        return true;
}

node* floydcycle(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
            return slow;
    }
    return NULL;
}
int main()
{
    node *tail = NULL;

    // empty list m enter kr rhe ho tb
    insertelement(tail, 0, 4);
    insertelement(tail, 4, 5);
    print(tail);

    insertelement(tail, 5, 6);
    insertelement(tail, 6, 7);
    print(tail);

    // deletenode(tail, 5);
    // print(tail);

    // if (checkcircular)
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    //     "NO"; // return one or zero bool
    //  cout << (checkcircular); // return one or zero bool


    if (floydcycle(tail)!=NULL)
    {
        cout << "Yes" << endl;
    }
    else
        "NO";
    return 0;
}