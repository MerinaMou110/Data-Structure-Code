#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string s;
    Node *next;
    Node *prev;
    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string st) //----O(1)
{
    Node *newNode = new Node(st);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        insert_at_tail(head, tail, s);
    }

    int q;
    cin >> q;
    string st_v, st;
    for (int i = 0; i < q; i++)
    {
        cin >> st_v;
        Node *tmp2;
        if (st_v == "visit")
        {
            cin >> st;
            Node *tmp = head;
            int flag = 0;
            while (tmp != NULL)
            {

                if (tmp->s == st)
                {

                    tmp2 = tmp;
                    flag = 1;

                    break;
                }

                tmp = tmp->next;
            }
            if (flag == 1)
            {
                cout << tmp2->s << endl;
            }
            else
                cout << "Not Available" << endl;
        }

        else if (st_v == "prev" && tmp2 != NULL)
        {
            if (tmp2->prev != NULL)
            {
                tmp2 = tmp2->prev;
                cout << tmp2->s << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (st_v == "next" && tmp2 != NULL)
        {
            if (tmp2->next != NULL)
            {
                tmp2 = tmp2->next;
                cout << tmp2->s << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}