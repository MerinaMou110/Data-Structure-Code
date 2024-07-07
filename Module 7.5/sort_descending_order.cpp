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
void descending(Node *head)
{
    Node *tmp=head;
    for(Node *i=head;i->next!=NULL;i=i->next)
    {
        for(Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                     swap(i->val,j->val);
            }
        }
    }
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
   
    while (true)  //-----------O(N)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        
        insert_at_tail(head, tail, val);
    }
    descending(head);
    print_linked_list(head);

    return 0;
}