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
void insert_at_tail(Node*& head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;

    }
    tail->next=newNode;
    tail=newNode;
}
void check_sorted_or_not(Node *head)
{
    Node *tmp=head;
    int flag=1;
    for(Node *i=head;i->next!=NULL;i=i->next)
    {
        for(Node *j=i->next;j!=NULL;j=j->next){
              if(i->val>j->val){
                flag=0;
                break;
              }
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;
}
int main()
{
    Node *head=NULL;
    Node*tail=NULL;
    while(true)
    {
            int val;
            cin>>val;
            if(val==-1){
                break;
            }
            insert_at_tail(head,tail,val);

    } 
    check_sorted_or_not(head);
    
    return 0;
}