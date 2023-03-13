#include <iostream>
using namespace std;

void print_array_elements(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}



int main()
{
    int arr[5] = {1, 2, 3, 4, 5};    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //..........................................................

    int arr1[] = {1, 2, 3};   //when size is not defined

    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    //.....................................................

    int arr2[10] = {1};         //all other 9 values will get initialized by 0
  
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;




//..................................................................................

//array and function 

int myarray[29]={2,4,5,9,6,33,334,4,2,9,8,7,2,3,4,5,6,7,7,8,9,1,2,3};

print_array_elements(myarray,29);
cout<<endl;

print_array_elements(myarray,19);  //passing till some index
cout<<endl;

print_array_elements(myarray+4,25);   //passing from some index


cout<<endl;
cout<<endl;

//.........................................................................................

int size;
cout<<"give array size ";
cin>>size;
  
//   int somearr[size];  //never do this...............

int somearr[1000];
for(int i=0;i<size;i++)
{
    cout<<"enter "<<i<<"th value ";
    cin>>somearr[i];
}

print_array_elements(somearr,size);

cout<<endl<<endl;

//........................................................

//dynamic array

int n;
cout<<"enter array size ";
cin>>n;
int* newarray=new int[n];

for(int i=0;i<n;i++)
{
    cout<<"enter "<<i<<"th value ";
    cin>>newarray[i];
}
print_array_elements(newarray,n);

cout<<endl;
cout<<endl;

//...................................................................................................

//size of array

int arr5[]={1,2,3,4,5,6,7,8,9,10};

int length=sizeof(arr5)/sizeof(int); 
cout<<"lenght of this array is  "<<length;

cout<<endl;
cout<<endl;


//....................................................................................................

}



// variable ke case me copy banati hai....

// array ke case me.... we are giving address...

// so changes made after passing array to function are actually made in original array only...........
