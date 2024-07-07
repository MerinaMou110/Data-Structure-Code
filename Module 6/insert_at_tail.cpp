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
void insert_at_tail(Node *&head,int v){
     Node *newNode=new Node(v);
     if(head==NULL){
        head=newNode;
        return;
     }

     Node* tmp=head;
     while(tmp->next!=NULL){
        tmp=tmp->next;
     }
     //tmp akhn last node
     tmp->next=newNode;
          
    
}
void print_link_list(Node *head)
{
    cout<<"Your linked list: "<<endl;
     Node* tmp=head;
     while(tmp!=NULL)
     {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
     }

}

int main()
{
    Node* head=NULL;
    while(true)
    {
        cout<<"option 1:insert at tail"<<endl;
        cout<<"option 2: print link list"<<endl;
        cout<<"option 3: terminate"<<endl;
    int op;
    cin>>op;
    if(op==1){
        cout<<"please enter value"<<endl;
         int v;
         cin>>v;
         insert_at_tail(head,v);
    }
    else if(op==2)
    {
        print_link_list(head);

    }
    else if(op==3)
    {
        break;
    }


    }
   
    
    return 0;
}