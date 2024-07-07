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
        this->prev=NULL;

    }
   

};
void print_normal(Node* head) //-----O(1)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node *tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

int size(Node *head)//------O(1)
{
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}


// void insert_at_tail(Node *&head,Node *&tail,int val) //----O(1)
// {
//     Node *newNode=new Node(val);
//     if(tail==NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     newNode->prev=tail;
//     tail=tail->next;
       
// }
void delete_at_position(Node *head,int pos)
{
        Node *tmp=head;
        for(int i=1;i<=pos-1;i++)
        {
            tmp=tmp->next;
        }
        Node *deleteNode=tmp->next;
        tmp->next=tmp->next->next;
        tmp->next->prev=tmp;
        delete deleteNode;
}
void delete_tail(Node *&tail,Node *&head)
{
    Node *deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail=NULL)
    {
        head=NULL;
        return;

    }
    tail->next=NULL;
}
void delete_head(Node *&head,Node *&tail)
{
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
int main()
{
    // Node *head=NULL;
    // Node *tail=NULL;
Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node *tail=c;
     
    //connection
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    int pos;
    cin>>pos;
        if(pos>=size(head))
        {
            cout<<"invalid"<<endl;
        }
        else if(pos==0)
        {
            delete_head(head,tail);
        }
        else if(pos==size(head)-1)
        {
            delete_tail(tail,head);
        }
        else
        delete_at_position(head,pos);
    print_normal(head);
    print_reverse(tail);



    return 0;
}