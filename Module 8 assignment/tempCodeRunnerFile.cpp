#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
int size(Node *head)
{
   Node *tmp=head;
   int count=0;while(tmp!=NULL)
   {
    count++;
    tmp=tmp->next;
   }
   return count;
}
void max_min(Node *head,int count)
{
    Node *tmp = head;
    int flag = 1;
    int max = INT_MIN;
    int min = INT_MAX;
    //cout<<size(head);
    for (Node *i = head; i != NULL; i = i->next)
    {
          if(count>1)
          {
        if (max < i->val)
        {

            max = i->val;
            //cout<<max<<endl;
        }
          }
          else if(count==1)
          {
          max=i->val;
          break;
    }