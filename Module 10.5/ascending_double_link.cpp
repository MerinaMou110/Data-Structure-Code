#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->next=NULL;

    }
   

};
void print(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
// int print_reverse(Node *head)
// {
//     Node *tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;

}
void ascending(Node *head,Node *tail)
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
// int reverse(Node *&head,Node *&tail)
// {
//     Node *i=head;
//     Node *j=tail;
//     while(i!=j && i->next!=j)
//     {
//         swap(i->val,j->val);
//         i=i->next;
//         j=j->prev;
//     }
//     swap(i->val,j->val);
// }

int main()
{
     Node *head=NULL;
    
    Node *tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
       {
        break;
       }
       insert_at_tail(head,tail,val);
        //palindrome(head,tail);
    }
   ascending(head,tail);
   print(head);
    return 0;
}