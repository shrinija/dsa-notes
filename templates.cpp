//templates
//creat a pair class without and with templates
//when both have same type T
//ans when both have diff type T , V

// How to make     Triplate<int,int,int>   or    Triplate<int,char,double>    without making new class ....


//.......................................................................
//->without templates

#include<iostream>
using namespace std;


class Pair{
    int x;
    int y;

    public:

   void setX(int x)
   {
      this->x=x;
   }
   int getX()
   {
    return x;
   }
   void setY(int y)
   {
    this->y=y;
   }
   int getY()
   {
    return y;
   }
};
int main()
{
    Pair p;
    p.setX(3);
    cout<<p.getX()<<endl;
    p.setY(4);
    cout<<p.getY();

}


//..............................
//-->now using templates..
//-->both x and y have same type T

#include<iostream>
using namespace std;

template <typename T>                         // we need to tell compiler what this T is...

class Pair{
    T x;
    T y;

    public:

   void setX(T x)
   {
      this->x=x;
   }
   T getX()
   {
    return x;
   }
   void setY(T y)
   {
    this->y=y;
   }
   T getY()
   {
    return y;
   }
};
int main()
{
    Pair<char> p;
    p.setX('a');
    cout<<p.getX()<<endl;
    p.setY(66);
    cout<<p.getY();

}

//.............................................

//--> x and y will have different type...

#include<iostream>
using namespace std;

template <typename T , typename V>

class Pair{
    T x;
    V y;

    public:

   void setX(T x)
   {
      this->x=x;
   }
   T getX()
   {
    return x;
   }
   void setY(V y)
   {
    this->y=y;
   }
   V getY()
   {
    return y;
   }
};
int main()
{
    Pair<char,int> p;
    p.setX('a');
    cout<<p.getX()<<endl;
    p.setY('b');
    cout<<p.getY();

}

//......................................................................................................................................

//--> to make     Triplate<int,int,int>   or    Triplate<int,char,double>    without making new class ....

int main()
{
    Pair<Pair<int,int>,int>p;
    Pair<int,int>p1;

    p1.setX(1);
    p1.setY(2);
    p.setX(p1);

    p.setY(3);
    
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    
    cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY()<<endl;
 
}

//.......

int main()
{
    Pair<Pair<int,char>,double>p;
    Pair<int,char>p1;

    p1.setX(1);
    p1.setY('a');
    p.setX(p1);

    p.setY(3.2321);
    
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    
    cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY()<<endl;
 
}

//.....................................................................................................................
