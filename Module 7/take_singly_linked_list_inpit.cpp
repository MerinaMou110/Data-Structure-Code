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
void insert_tail(Node*&head,Node* &tail,int val) //-----------O(1)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
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
int main()
{
    Node*head=NULL;
    Node *tail=NULL;
    int val;
    while(true) //---------------O(N)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_tail(head,tail,val); //---------O(1)..bar bar loop colle O(N)
    }
    print_linked_list(head);

    return 0;
}