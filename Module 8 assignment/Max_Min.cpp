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
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void max_min(Node *head)
{

    Node *tmp = head;
    int max = INT_MIN;

    for (Node *i = tmp; i != NULL; i = i->next)
    {

        if (max < i->val)
        {

            max = i->val;
        }
    }
    int min = INT_MAX;

    for (Node *i = tmp; i != NULL; i = i->next)
    {

        if (min > i->val)
        {
            min = i->val;
        }
    }

    cout << max << " " << min << endl;
}

int main()
{
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
        insert_at_tail(head, tail, val);
    }

    max_min(head); //------------------O(N)
    return 0;
}