//..............................................................
// string contains only small letters

#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string mystring="aabbcccddddfzzzzzssspppooooooooooooooooooooooooooooooooo";
  int arr[26]={0};

  for (auto &ch :mystring){
    arr[ch-'a']++;
  }

  for(int i=0;i<26;i++){
    char c=i+'a';
    cout<<c<<"->"<<arr[i]<<" , ";
  }

}

//.......................................................................................................................

//maximum array size inside main 10^6
//globaly 10^7
// bool array 10^7 inside main , and globaly 10^8

//........................................................................................................
//string can contain any character
   
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string mystring="aabb12888DDDDPPPQQQQ";
  int arr[256]={0};

  for (auto &ch :mystring){
    arr[ch]++;
  }

int i=5;
  while(i--){
   cout<<"enter character : ";
   char c;
   cin>>c;
   cout<<c<<"->"<<arr[c]<<endl;
  }
}

//...................................................................................

// Count frequency of each element in the array

//Use of two loops
// Time Complexity: O(N*N)
// Space Complexity:  O(N)

#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
 
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}

//using map
//Time Complexity: O(N)
//Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;
 
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << "->" << x.second << endl;
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}

//............................................................................................................
//Find the highest/lowest frequency element
// Time Complexity: O(N*N), where N = size of the array. We are using the nested loop to find the frequency.
// Space Complexity:  O(N), where N = size of the array. It is for the visited array we are using.

#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        if (count > maxFreq) {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}


//...........
//using map
// Time Complexity: O(N), where N = size of the array. The insertion and retrieval operation in the map takes O(1) time.
// Space Complexity:  O(N), where N = size of the array. It is for the map we are using.

#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}
//............................................................................................

