//queue using array   fixed sized  dynamic
//queue using LL
//inbuilt queue


//..............................................................................

//-->queue using array.. when size is given..


#include<iostream>
using namespace std;

template<typename T>

class queue_using_array{

T *arr;
int nextindex;
int frontindex;
int size;
int capacity;

public:
queue_using_array(int totalsize)
{
    arr=new T[totalsize];
    nextindex=0;
    frontindex=-1;
    size=0;
    capacity=totalsize;
}

void enqueue(T data)
{
  if(size==capacity)
  {
     cout<<"queue is full"<<endl;
     return;
  }
  arr[nextindex]=data;
  nextindex=(nextindex+1)%capacity;
  size++;
  if(frontindex==-1)
  {
    frontindex=0;
  }
}
void dequeue()
{
    if(size==0)
    {
        cout<<"queue is empty";
        return;
    }
    frontindex=(frontindex +1)%capacity;
    size--;
}
T front()
{
   return arr[frontindex];
}
int getsize()
{
    return size;
}
bool isempty()
{
    return size==0;
}

};
int main()
{
    queue_using_array<int>q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;

    q.enqueue(4);
    q.enqueue(5);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;

    q.dequeue();

    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);

    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;

    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);


    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;
}

//...................................................................
//--> queue using array duynamic

#include<iostream>
using namespace std;

template<typename T>

class queue_using_array_dynamic{

T *arr;
int nextindex;
int frontindex;
int size;
int capacity;

public:
queue_using_array_dynamic()
{
    arr=new T[4];
    nextindex=0;
    frontindex=-1;
    size=0;
    capacity=4;
}

void enqueue(T data)
{
  if(size==capacity)
  {
     T *newarr =new T[capacity*2];
     for(int i=0;i<capacity;i++)
     {
        newarr[i]=arr[(frontindex+i)%capacity];
        frontindex++;
     }
     delete [ ] arr;
     arr=newarr;
     nextindex=capacity;
     frontindex=0;
     capacity=capacity*2;
  }
  arr[nextindex]=data;
  nextindex=(nextindex+1)%capacity;
  size++;
  if(frontindex==-1)
  {
    frontindex=0;
  }
}
void dequeue()
{
    if(size==0)
    {
        cout<<"queue is empty";
        return;
    }
    frontindex=(frontindex +1)%capacity;
    size--;
}
T front()
{
   return arr[frontindex];
}
int getsize()
{
    return size;
}
bool isempty()
{
    return size==0;
}

};
int main()
{
    queue_using_array_dynamic<int>q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;

    q.enqueue(4);
    q.enqueue(5);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;

    q.dequeue();

    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);

    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;

    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);


    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.getsize()<<endl;    
    cout<<endl;
}
//..........................................................................................
//-->queue using LL

#include <iostream>
using namespace std;
template <typename T>

class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data)
    {
      this->data=data;
      next=NULL;
    }
};

template <typename T>

class queue_using_LL{

Node<T> *head;
Node<T> *tail;
int size;

public:
queue_using_LL()
{
    head=NULL;
    tail=NULL;
    size=0;
}

void enqueue(T data)
{
  Node<T>* newnode= new Node<T>(data);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    size++;
  }
  else{
    tail->next=newnode;
    tail=tail->next;
    size++;
  }
}

void dequeue()
{
    if(head==NULL)
    {
        cout<< "queue is empty"<<endl;
        return ;
    }
    Node<T>*temp=head;
    head=head->next;
    delete temp;
    size--;
}
int getsize()
{
    return size;
}
bool isempty()
{
    return size==0;
}
T front()
{
    return head->data;
}
};
int main()
{
    queue_using_LL<int>q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.dequeue();
    q.dequeue();

cout<<q.getsize()<<endl;
cout<<q.isempty()<<endl;
cout<<q.front()<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
}

//..................................................................................
//inbuilt queue


#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<int>q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.pop();

    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;

     q.pop();
     q.pop(); 
     q.pop();

cout<<q.empty()<<endl;







//.....................................................................

     q.pop();

     cout<<endl;

     //what is happening after this................................?

cout<<q.empty()<<endl;

    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
}
//.....................................................................................................................
