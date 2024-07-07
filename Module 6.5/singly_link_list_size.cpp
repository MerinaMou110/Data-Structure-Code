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
void size(Node *head)
{
    Node *tmp=head;
    int count=0;
    while(tmp!=NULL){
             count++;
            tmp=tmp->next;
    }
    cout<<count<<endl;
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
    
    print_linked_list(head);
    size(head);
    
    return 0;
}