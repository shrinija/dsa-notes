https://www.geeksforgeeks.org/substring-in-cpp/



//...........................................................................................

// Convert a String to an Integer using Recursion


#include<bits/stdc++.h>
using namespace std;

int stringToInt(string str)
{
	if (str.length() == 1)
		return (str[0] - '0');

	int x = str[0] - '0';
	int  y = stringToInt(str.substr(1));

	x = x * pow(10, str.length() - 1) + y;
	return int(x);
}

int main()
{
	string str = "1235";
	cout << (stringToInt(str)) << endl;
}

//.........................................................................................................
// recursive bubble sort (comment out see this cnt variable values )
// see how stack works, how & works

#include <iostream>
using namespace std;
void Recursive_Bubble_sort(int arr[], int n, int& cnt)
{
   if(n<=1)return;
   bool swapped=0;
   for(int i=0;i<n-1;i++){
    cnt++;
    if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
    swapped=1;
    }
   }
   if(swapped==0)return;
    // cout<<cnt<<" ";
   Recursive_Bubble_sort(arr,n-1,cnt);
    // cout<<cnt<<" ";

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
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int cnt=1;
    Recursive_Bubble_sort(arr, size, cnt);
    cout << "sorted array : ";
    print_array(arr, size);
    cout<<endl;
    cout<<cnt;
}
