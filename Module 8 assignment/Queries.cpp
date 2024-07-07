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
// void print_linked_list(Node *head)
// {
//     Node *tmp = head;
//     cout<<tmp->val<<" ";
//     while (tmp->next != NULL)
//     {
//         //cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//    cout<<tmp->val<<endl;

//    // cout << endl;
// }
void insert_values_at_head(Node *&head,Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        cout<<head->val<<" "<<tail->val;
    }
    else{

    newNode->next = head;
    head = newNode;
    cout<<head->val<<" "<<tail->val;
    }
    cout<<endl;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        cout<<head->val<<" "<<tail->val;

    }
    else{
    tail->next = newNode;
    tail = newNode;
    cout<<head->val<<" "<<tail->val;
    }
    cout<<endl;
}
 

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
       long long  int v,pos;
        cin>>pos>>v;
        if(pos==0){
            insert_values_at_head(head,tail,v);
            // print_linked_list(head);
        
          
        }
        else if(pos==1)
        {
             insert_at_tail(head,tail,v);
             // print_linked_list(head);
        
        }
       
        
        

    }


    
    return 0;
}