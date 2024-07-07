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
void insert_at_tail1(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else{
    tail->next = newNode;
    tail = newNode;
    }
}
void insert_at_tail2(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else{
    tail->next = newNode;
    tail = newNode;
    }
}
int size1(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    // cout<<count<<endl;
    return count;
}
int size2(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    // cout<<count<<endl;
    return count;
}
void same_to_same(Node *head1,Node *head2)
{
    int flag;
     if(size1(head1)==size2(head2))
    {
        flag=1;
        Node *j=head2;
           
            Node *i=head1;
            while(i!=NULL)
            {
                if(i->val!=j->val)
                {
                    flag=0;
                    break;
                }
                i=i->next;
                j=j->next;
            }

    }
    else if(size1(head1)!=size2(head2))
    {
        flag=0;
    }
    

    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2=NULL;
    Node *tail2=NULL;

    while (true) //-----------O(N)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail1(head1, tail1, val);
    }
    Node *head = NULL;
    Node *tail = NULL;

    while (true) //-----------O(N)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail2(head2, tail2, val);
    }
    same_to_same(head1,head2);
    return 0;
}