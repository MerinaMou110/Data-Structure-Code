#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;

    }
   

};
void not_reverse(Node *n)
{
    if(n==NULL){
        return;
    }
    cout<<n->val<<" ";
    not_reverse(n->next);
    
}
void reverse(Node *n)
{
    if(n==NULL){
        return;
    }
    reverse(n->next);
    cout<<n->val<<" ";
}
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
void print_linked_list(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
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
    reverse(head);
    cout<<endl;
    not_reverse(head);
    

   
    
    return 0;
}