#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert_values(Node *head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= index - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
             return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_values_at_head(Node *&head, int val)
{

    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    // cout<<count<<endl;
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int index, val;
        cin >> index >> val;
        if (index == 0)
        {
            insert_values_at_head(head, val);
            print_linked_list(head);
        }
        else if (index<=size(head))
            {
                insert_values(head, index, val);
                print_linked_list(head);
            }
            else
            insert_values(head,index,val);
        
    }

    return 0;
}