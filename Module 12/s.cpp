#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node(int val)
       {
        this->val = val;
        this->next = NULL;
       }
};


void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void reverse(Node* &head, Node* crnt)
{
    if(crnt->next == NULL)
    {
        head = crnt;
        return;
    }
    reverse(head,crnt->next);
    crnt->next->next = crnt;
    crnt->next = NULL;
}

int main()
{
    Node* head_1 = NULL;
    Node* head_2 = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head_1, v);
        insert_at_tail(head_2,v);
    }

   

    reverse(head_2, head_2);

    int flag=0;
    Node* i = head_1;
    Node* j = head_2;
    while(i!= NULL)
    {
            if (i->val != j->val)
            {
                flag=1;
                break;
                
            }
            i=i->next;
            j=j->next;
    }
    if (flag == 0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

    return 0;
}