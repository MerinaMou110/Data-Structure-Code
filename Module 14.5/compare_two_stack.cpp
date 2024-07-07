#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    int sz2 = 0;
    void push(int val)
    {
        sz++;
        sz2++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        sz2--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }

        tail->next = NULL;
        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
        return sz2;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    myStack st2;
    int n, m;
    int flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
        }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (st.size() == st2.size())
    {
        while (!st.empty())
        {
            if (st.top() != st2.top())
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
            st.pop();
            st2.pop();
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}