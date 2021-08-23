#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
}*front=NULL,*rear=NULL;

class Queue
{
public:

    void enqueue(int x);
    int deque();
    void display();
};

void Queue::enqueue(int x)
{
    node *t=new node;

    if(t==NULL)
    {
       cout<<"queue is full";
    }
    else
    {
         t->data=x;
         t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
        }
        else
        {
              rear->next=t;
              rear=t;
        }

    }

}

int Queue::deque()
{
    int x=-1;
    node *p;

    if(front==NULL)
    {
        cout<<"queue is empty";
    }
    else
    {
        p=front;
        front=front->next;
        x=p->data;
        free(p);

    }
    return x;
}

void Queue::display()
{
    node *p=front;

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

}

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();
    cout<<endl;
    cout<<q.deque()<<endl;
    q.display();
}

