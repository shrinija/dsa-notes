//stack using array  static,dynamic  , using templates
//stack using LL 
//inbuilt stack


//................................................................

//--> stack using array

#include<iostream>
#include<climits>
using namespace std;
class stack_using_array{
    int *arr;
    int nextindex;
    int capacity;

    public:
    stack_using_array(int total_size)
    {
        arr=new int[total_size];
        nextindex=0;
        capacity=total_size;
    }
    void push(int data)
    {
        if(nextindex==capacity)
        {
            cout<<"stack is full";
            return;
        }
        arr[nextindex]=data;
        nextindex++;
    }
    void pop()
    {
        if(nextindex==0)
        {
           cout<<"stack is empty";
           return;
        }
        nextindex--;
    }
    int top()
    {
         if(nextindex==0)
        {
           cout<<"stack is empty";
           return INT_MIN;
        }
        return arr[nextindex-1];
    }
    bool is_empty()
    {
        return nextindex==0;
    }
    int size()
    {
        return nextindex;
    }

};
int main()
{
    stack_using_array s(5);
    s.push(1);
    s.push(2);
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.is_empty()<<endl;
}

//...........................................................

//-->using array dynamic stack

#include<iostream>
#include<climits>
using namespace std;
class stack_using_array_dynamic{
    int *arr;
    int nextindex;
    int capacity;

    public:
    stack_using_array_dynamic()
    {
        arr=new int[4];
        nextindex=0;
        capacity=4;
    }
    void push(int data)
    {
        if(nextindex==capacity)
        {
           int *newarr=new int[capacity*2];
           for(int i=0;i<capacity;i++)
           {
            newarr[i]=arr[i];
           }
           capacity=capacity*2;
           delete [] arr;   //delete karna ...?
           arr=newarr;
        }
        arr[nextindex]=data;
        nextindex++;
    }
    void pop()
    {
        if(nextindex==0)
        {
           cout<<"stack is empty";
           return;
        }
        nextindex--;
    }
    int top()
    {
         if(nextindex==0)
        {
           cout<<"stack is empty";
           return INT_MIN;
        }
        return arr[nextindex-1];
    }
    bool is_empty()
    {
        return nextindex==0;
    }
    int size()
    {
        return nextindex;
    }

};
int main()
{
    stack_using_array_dynamic s;
    s.push(1);
    s.push(2);
     s.push(1);
    s.push(2);
     s.push(1);
    s.push(2);
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.is_empty()<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

cout<<endl;
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.is_empty()<<endl;
}

//......................................................................
//-->using array using templates

//stack using array
//stack using array dynamic
//-->github

#include<iostream>
using namespace std;

template <typename T>

class stack_using_array_dynamic_usingtemplate{
    T *arr;
    int nextindex;
    int capacity;

    public:
    stack_using_array_dynamic_usingtemplate()
    {
        arr=new T[4];
        nextindex=0;
        capacity=4;
    }
    void push(T data)
    {
        if(nextindex==capacity)
        {
           T *newarr=new T[capacity*2];
           for(int i=0;i<capacity;i++)
           {
            newarr[i]=arr[i];
           }
           capacity=capacity*2;
           delete [] arr;                                   //delete karna ...?
           arr=newarr;
        }
        arr[nextindex]=data;
        nextindex++;
    }
    void pop()
    {
        if(nextindex==0)
        {
           cout<<"stack is empty";
           return;
        }
        nextindex--;
    }
    T top()
    {
         if(nextindex==0)
        {
           cout<<"stack is empty";
           return 0;
        }
        return arr[nextindex-1];
    }
    bool is_empty()
    {
        return nextindex==0;
    }
    int size()
    {
        return nextindex;
    }

};
int main()
{
    stack_using_array_dynamic_usingtemplate <int>s;
    s.push(1);
    s.push(2);
     s.push(1);
    s.push(2);
     s.push(1);
    s.push(2);
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.is_empty()<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

cout<<endl;
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.is_empty()<<endl;
}
//.......................................................................................................................................

//->stack using LL  and templates

#include<iostream>
using namespace std;

template <typename T>

class Node{
public:                          // linked list me ham uske properties ko direct access karate , to vo public rakhana padata
T data;
Node* next;

Node(T data)                  
{
    this->data=data;
    next=NULL;
}
};

template <typename T>

class stack_using_LL{
   
   Node<T>*head;
   int size;

public:

stack_using_LL()                              //this constructor has to be public.......once learn this proplerly......
{
    head=NULL;
    size=0;
}

   void push(T data)
   {
    Node<T>* newnode=new Node<T>(data);
    
     newnode->next=head;
     head=newnode;
     size++;
   }

   void pop()
   {
    if(head==NULL)
    {
        cout<<"stack is empty";
    }
    else{
    Node<T>*temp=head;
    head=head->next;
    delete temp;
    size--;
    }
   }

   T top()
   {
    return head->data;
   }

   bool is_empty()
   {
    return head==NULL;
   }

   int stacksize()
   {
      return size;
   }
 };

 int main()
 {
    stack_using_LL<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();

    cout<<s.top()<<endl;

    cout<<s.is_empty()<<endl;

    cout<<s.stacksize();

 }
//.......................................................................................................................

//-->inbuilt stack

#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();

    cout<<s.top()<<endl;

    cout<<s.empty()<<endl;

    cout<<s.size();

    s.pop();
    s.pop();
    s.pop();

    cout<<s.top()<<endl;

    cout<<s.empty()<<endl;

}
//............................................................


//---------------------------------------------------------------------------------------------------------------------------------
-> stack using array

#include<iostream>
using namespace std;

template <typename T>

class stack{
  T*arr;
  int nextindex;
  int capacity;

  public:
  stack(){
   nextindex=0;
   capacity=4;
   arr=new T[4];
  }

  void push(T val){
    if(nextindex<capacity){
     arr[nextindex++]=val;
    }
    else{
      capacity=capacity*2;
      arr=new T[capacity];
      arr[nextindex++]=val;
    }
  }
  void pop(){
    if(nextindex!=0)
    nextindex--;
    else
    cout<<"empty stack";
  }
  T top(){
    if(nextindex!=0)
    return arr[nextindex-1];
    else 
    return -1;
  }
  int size(){
    return nextindex;
  }
};

int main()
{
  stack<int>s;
  cout<<s.top();
  cout<<endl;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(5);
  cout<<s.top();
  cout<<endl;
  cout<<s.size();
  cout<<endl;
}

//--------------------------------------------------------------------------------------------------------------------------
