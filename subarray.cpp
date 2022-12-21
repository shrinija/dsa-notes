
//                  -->subarray   -->print   --> max subarray sum   -->kadane's algo



#include<iostream>
#include<climits>
using namespace std;


//max subarray sum... input array contain both positive and negative elements....(approach 1) .... 3 for loops..

int max_subarray_sum_1(int arr[] ,int n)
{
   int max_sum=INT_MIN;
   int sum=0;
   for(int i=0;i<n;i++)
   {
      for(int j=i;j<n;j++)
      {
         for(int k=i;k<=j;k++)
         {
            cout<<arr[k]<<" ";
            sum+=arr[k];
         }
         cout<<" => "<<sum;
         cout<<endl;
         if(sum>max_sum)
         {
            max_sum=sum;
         }
         sum=0;
      } 
   }
   return max_sum;
}

// max subarray sum ...as we have is nothing to do with elements in subarray we only want max sum..so ... (approach 2)...2 for loops

int max_subarray_sum_2(int arr[],int n)                
{
   int max_sum=INT_MIN;
   int sum=0;
   for(int i=0;i<n;i++)
   {
      for(int j=i;j<n;j++)
      {
         sum+=arr[j];

         if(sum>max_sum)
         {
            max_sum=sum;
         }
      }
      sum=0;
   }
   return max_sum;
}

//-------------> kadane's algo <----------------

int max_subarray_sum_3(int arr[],int n)    
{
   int max_sum=INT_MIN;
   int sum=0;
   for(int i=0;i<n;i++)
   {
      sum+=arr[i];
      if(sum>max_sum)
      {
         max_sum=sum;
      }
      if(sum<0)
      {
         sum=0;
      }
   }
   return max_sum;
}      

//print all possible subarray 

void print_subarray(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      for(int j=i;j<n;j++)
      {
         for(int k=i;k<=j;k++)
         {
            cout<<arr[k]<<" ";
         }
         cout<<endl;
      } 
   }
}

int main()
{
   int arr[100];
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

//print_subarray();

/*
int max_sum=max_subarray_sum_1(arr ,n );
cout<<"max sum = "<<max_sum;
*/

int max_sum=max_subarray_sum_3(arr ,n );
cout<<"max sum = "<<max_sum;
   
}
