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

// value is for compare the element
void deletenode(node *&tail, int value)
{
    if (tail == NULL)
    {
        // empty case
        cout << "List Is Empty" << endl;
        return;
    }
    else
    {
        // non-empty case
        // assume the value is presnet in CLL
        node *prev = tail;
        node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // this is because this give segmentation fault
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(node *tail)
{
    node *temp = tail;

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

    deletenode(tail , 5);
    print(tail);

    return 0;
}