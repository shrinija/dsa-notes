//stack using array  static,dynamic
//stack using LL 



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

//-->dynamic stack

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
//-->using templates

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
//................................................
