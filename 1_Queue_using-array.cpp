#include<iostream>
using namespace std;

class Queue
{
    int size;
    int front;
    int rear;
    int *Q;

    public:

        Queue(int size)
        {
            front=rear=-1;
            this->size=size;
            Q=new int[this->size];
        }

        void enqueue(int x);
        int deque();
        void display();

};

void Queue::enqueue(int x)
{
    if(rear==size-1)
    {
        cout<<"Queue is full ";
    }
    else
    {
        rear++;
        Q[rear]=x;
    }
}

int Queue::deque()
{
    int x=-1;
    if(front==rear)
    {
        cout<<"Queue is empty ";
    }
    else
    {
        x=Q[front+1];
        front++;
    }

    return x;
}

void Queue::display()
{
    for(int i=front+1;i<=rear;i++)
    {
        cout<<Q[i]<<" ";
    }
}

int main()
{
    Queue q(5);

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

