#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node *prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->next=NULL;

    }
   

};
class myQueue{

    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val)
    {
     sz++;
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
    void pop()
    {
        if(head==NULL){
            return;
        }
        sz--;
        Node *deleteNode =head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->prev=NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
class myStack{
     public:
     Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node *newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
        }
        else{
            tail->next=NULL;
            delete deleteNode;
        }
    }

    int top()
    {
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
     
};
int main()
{
    myQueue q;
    myStack st;
   
    int n,m;
    cin>>m>>n;
    // for(int i=0;i<m;i++){
    //     int x;
    //     cin>>x;
    //     q.push(x);
    // }
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        st.push(y);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int flag=true;

   if(q.size()!=st.size()){
    flag=false;
   }
   else if(q.size()==st.size()){
    while(!q.empty()){
           if(q.front()!=st.top()){
            flag=false;
            break;
           }
           else{
            q.pop();
            st.pop();
           }
    }
   

   }
   if(flag==true){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
    

    
}