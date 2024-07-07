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
void insert_at_tail(Node *&head,Node *&tail,int val) //----O(1)
{
    Node *newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
   
    tail=newNode;
       
}
void print_linked_list(Node* head) //----------O(N)
{
    Node *tmp=head;
    while(tmp!=NULL) 
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void ascending(Node *head)
{
    for(Node *i=head;i->next!=NULL;i=i->next)
    {
        for(Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void delete_duplicate(Node *head)
{
    Node *tmp=head;
    while(tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            tmp->next=tmp->next->next;
        }
        if(tmp->next==NULL)
        {
            break;
        }
        else if(tmp->val!=tmp->next->val)
        {
            tmp=tmp->next;
        }

    }
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
            int val;
            cin>>val;
            if(val==-1)
            {
                break;
            }
            insert_at_tail(head,tail,val);
    }
   // print_linked_list( head);
    ascending(head);
    delete_duplicate(head);
    print_linked_list( head);
    
    return 0;
}