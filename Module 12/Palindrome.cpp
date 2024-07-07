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
void insert_at_tail(Node *&head,Node *&tail,int val) 
{
    Node *newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
   
    tail=newNode;
       
}

void insert_at_tail2(Node *&head,Node *&tail,int val) //----O(1)
{
    Node *newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
   
    tail=newNode;
       
}
void reverse(Node *&head,Node *cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
     reverse(head,cur->next);
     cur->next->next=cur;
     cur->next=NULL;
}
void palindrome_check(Node *head,Node *newhead)

{
    Node *tmp=head;
    Node *tmp2=newhead;
   // bool flag=true;
   int flag=1;
    while(tmp!=NULL)
    {
        if(tmp->val!=tmp2->val)
        {
            flag=0;
            break;

        }
      
        tmp=tmp->next;
        tmp2=tmp2->next;
    
}
if(flag==1)
{
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;

}


int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    Node *newhead=NULL;
    Node *newtail=NULL;
    while(true)
    {
            int val;
            cin>>val;
            if(val==-1)
            {
                break;
            }
            insert_at_tail(head,tail,val);
    }

    Node *tmp=head;
    while(tmp!=NULL)
    {
        insert_at_tail2(newhead,newtail,tmp->val);
        tmp=tmp->next;
    }
   
    reverse(newhead,newhead);
   
    palindrome_check(head,newhead);
   
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node(int val)
       {
        this->val = val;
        this->next = NULL;
       }
};


void insert_at_tail(Node *&head,Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
   
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void reverse(Node* &head, Node* crnt)
{
    if(crnt->next == NULL)
    {
        head = crnt;
        return;
    }
    reverse(head,crnt->next);
    crnt->next->next = crnt;
    crnt->next = NULL;
}

// int main()
// {
//     Node* head_1 = NULL;
//     Node* tail_1=NULL;
    
//     int v;
//     while (true)
//     {
//         cin >> v;
//         if (v == -1)
//         {
//             break;
//         }
//         insert_at_tail(head_1,tail_1, v);
//     }
//     Node* head_2 = NULL;
//     Node* tail_2=NULL;
//     Node *tmp_1 = head_1;
//    // Node *tmp_2 = head_2;
//     while (tmp_1 != NULL)
//     {
//         // tmp_2 = tmp_1;
//         // tmp_1 = tmp_1->next;
//         // tmp_2 = tmp_2->next;
//         insert_at_tail(head_2,tail_2,tmp_1->val);
//         tmp_1=tmp_1->next;
//     }
    

//     reverse(head_2, head_2);

//     int flag=0;
//     Node* i = head_1;
//     Node* j = head_2;
//     while(i!= NULL)
//     {
//             if (i->val != j->val)
//             {
//                 flag=1;
//                 break;
                
//             }
//             i=i->next;
//             j=j->next;
//     }
//     if (flag == 0)
//     {
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
    

//     return 0;
// }