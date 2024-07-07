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
void insert_at_tail2(Node *&head,Node *&tail,int val)
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
void insert_at_tail1(Node *&head,Node *&tail,int val)
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
int size2(Node *head)
{
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        cnt++;
    }
    return cnt;

}
int size1(Node *head)
{
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        cnt++;
    }
    return cnt;

}
int main()
{
    Node *head1=NULL;
    Node *head2=NULL;
    Node *tail1=NULL;
    Node *tail2=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
       {
        break;
       }
       insert_at_tail1(head1,tail1,val);

    }
    while(true)
    {
        cin>>val;
        if(val==-1)
       {
        break;
       }
       insert_at_tail2(head2,tail2,val);

    }
    if(size1(head1)==size2(head2))
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}