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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void max(Node *head)
{
    Node *tmp=head;
    int flag=1;
    int max=INT_MIN;
    for(Node *i=head;i!=NULL;i=i->next)
    {
        
              if(max<i->val){
                max=i->val;
                
              }
        
    }
    cout<<max<<endl;
}
int main()
{
     Node *head = NULL;
    Node *tail = NULL;
   
    while (true)  //-----------O(N)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    max(head); //------------------O(N)
    return 0;
}