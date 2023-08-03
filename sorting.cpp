
//...........................................................................................................
//selection sort
//best- O(n^2)
//avg- O(n^2)
//worst-O(n^2)
//s.c- worst-O(1)


#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
int min;
int min_index;
for(int i=0;i<n-1;i++){
	min=arr[i];
	min_index=i;
  for(int j=i+1;j<n;j++){
    if(arr[j]<min){
			min=arr[j];
			min_index=j;
		}
	}
	swap(arr[i],arr[min_index]);
}
}

void print_array(int arr[],int n){
   for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	 }
}

int main()
{
  int arr[]={4,5,2,3,1,7,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<sizeof(arr);
	cout<<endl;
	cout<<sizeof(arr[0]);
	cout<<endl;
	cout<<size;
	cout<<endl;

   selection_sort(arr,size);
	 cout<<"sorted array : ";
	 print_array(arr,size);
}

//..................................................................................................

//Bubble Sort
//best- O(n)
//avg- O(n^2)
//worst- O(n^2)
//s.c - O(1)

#include <iostream>
using namespace std;
void Bubble_sort(int arr[], int n)
{
	bool swapped;
	for(int i=0;i<n-1;i++){
		swapped=false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1]);
					swapped=true;
			}
		}
    if(swapped==false)return;
	}
}

void print_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {4, 5, 2, 3, 1, 7, 6};
	int size = sizeof(arr) / sizeof(arr[0]);

	Bubble_sort(arr, size);
	cout << "sorted array : ";
	print_array(arr, size);
}

//.................................................................................
//insertion sort
//best- O(n)
//avg- O(n^2)
//worst- O(n^2)
//s.c - O(1)


#include <iostream>
using namespace std;
void Insertion_sort(int arr[], int n)
{
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j=i-1;
    for(;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
	}
}

void print_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {4, 5, 2, 3, 1, 7, 6};
	int size = sizeof(arr) / sizeof(arr[0]);

	Insertion_sort(arr, size);
	cout << "sorted array : ";
	print_array(arr, size);
}
//.......................................................................................

//merge Sort
//best- O(nlog(n))
//avg- O(nlog(n))
//worst- O(nlog(n))
//s.c - O(n)

