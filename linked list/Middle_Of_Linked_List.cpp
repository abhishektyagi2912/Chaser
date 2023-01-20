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

int getlength(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}
// this give index of midddle element
// int middle(node*head){
//     int len = getlength(head);
//     int ans = (len/2)+1;
//     return ans;
// }
node *middle(node *head)
{
    int len = getlength(head);
    int ans = (len / 2);
    node *temp = head;
    int cnt =0;
    while(cnt<ans)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;
}

// int middle(node *head)
// {
// }
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    /// insert at head
    insertathead(head, 20);
    insertathead(head, 40);
    insertathead(head, 30);
    print(head);
    // int a= middle(head);
    // cout << a;

    return 0;
}