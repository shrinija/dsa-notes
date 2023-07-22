#include<iostream>
using namespace std;


void incrementCountwhen_pass_by_ref(int &count)
{
  count=count+1;
}

void incrementCount(int count)
{
  count=count+1;
}


int main()
{
  int count=0;

  incrementCount(count);

  cout<<"Pass by value\n";
  cout<<"Count:";
  cout<<count<<endl;

  incrementCountwhen_pass_by_ref(count);

  cout<<"Pass by reference\n";
  cout<<"Count:";
  cout<<count;
  return 0;
}