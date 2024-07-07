
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
    else{
    tail->next=newNode;
    tail=newNode;
    }
}
int size(Node *head)
{
    Node *tmp=head;
    int count=0;
    while(tmp!=NULL){
             count++;
            tmp=tmp->next;
    }
    //cout<<count<<endl;
    return count;
}
void ascending(Node *head)
{
    Node *tmp=head;
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
void middle_value(Node *head,int count)
{
   if(count==1)
   {
    cout<<head->val;
   }
   else if(count==2)
   {
    Node *tmp=head;
    cout<<tmp->next->val<<" "<<tmp->val;
   }


   else if(count%2==0)
    {
        Node *tmp=head;
        for(int i=1;i<=count/2-1;i++)
        {
            if(i==count/2-1)
            {
               cout<<tmp->next->next->val<<" "<<tmp->next->val<<endl;
            }
            else
            tmp=tmp->next;
        }
    }
    else if(count%2!=0)
     {
        Node *tmp=head;
        for(int i=1;i<=count/2;i++)
        {
            if(i==count/2)
            {
               cout<<tmp->next->val<<endl;
            }
            else
            tmp=tmp->next;
        }
     }
    
}
int main()
{
       Node *head=NULL;
    Node*tail=NULL;
    while(true) //------------------O(N)
    {
            int val;
            cin>>val;
            if(val==-1){
                break;
            }
            insert_at_tail(head,tail,val);

    } 
    size(head); //-----------------O(N)
   ascending(head);
 middle_value(head,size(head)); //----------O(N)
    return 0;
}