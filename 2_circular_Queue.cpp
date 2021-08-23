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
        this->size=size;
        front=rear=0;
        Q=new int[this->size];
    }

    void enqueue(int x);
    int deque();
    void display();
};

void Queue::enqueue(int x)
{
    if((rear+1)%size==front)
    {
        cout<<"queue is full ";
    }
    else
    {
        rear=(rear+1)%size;
        Q[rear]=x;
    }
}

int Queue::deque()
{
    int x=-1;
    if(front==rear)
    {
        cout<<"queue is empty";

    }
    else
    {
        front=(front+1)%size;
        x=Q[front];
    }

    return x;
}

void Queue::display()
{
    int i=front+1;

    do
    {
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
}

int main()
{
    Queue q(5);


    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);


    q.display();
    cout<<endl;

    cout<<q.deque()<<endl;
    cout<<q.deque()<<endl;

    q.display();
    cout<<endl;

    q.enqueue(10);
    q.enqueue(20);
    q.display();
}
