/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Stack
{
    //Write your code here

public:
   Node* head=NULL;
   Node* tail=NULL;
   int sz=0;
    Stack()
    {
        //Write your code here 
    }

    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here  
        if(sz==0)
        return true;
        else
        return false;
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node *newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
       newNode->next=head;
       head=newNode;
    }

    void pop()
    {
        //Write your code here
        if(head==NULL)
        {
            return;
        }
        sz--;
    
        Node *deleteNode=head;
        head=head->next;
        delete deleteNode;
    }

    int getTop()
    {
        //Write your code here
       if(isEmpty())
       return -1;
       else return head->data;
    }
};