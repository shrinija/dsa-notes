
//...........................................................................................................
// selection sort
// best- O(n^2)
// avg- O(n^2)
// worst-O(n^2)
// s.c- worst-O(1)

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    int min;
    int min_index;
    for (int i = 0; i < n - 1; i++)
    {
        min = arr[i];
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
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
    cout << sizeof(arr);
    cout << endl;
    cout << sizeof(arr[0]);
    cout << endl;
    cout << size;
    cout << endl;

    selection_sort(arr, size);
    cout << "sorted array : ";
    print_array(arr, size);
}

//..................................................................................................

// Bubble Sort
// best- O(n)
// avg- O(n^2)
// worst- O(n^2)
// s.c - O(1)

#include <iostream>
using namespace std;
void Bubble_sort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            return;
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
// insertion sort
// best- O(n)
// avg- O(n^2)
// worst- O(n^2)
// s.c - O(1)

#include <iostream>
using namespace std;
void Insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
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

// merge Sort
//  Reason: At each step, we divide the whole array, for that logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn
// best- O(nlog(n))
// avg- O(nlog(n))
// worst- O(nlog(n))
// s.c - O(n)

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low]; // see this ....................
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);      // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);    // merging sorted halves
}

int main()
{

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//....................................................................................................

// Quick Sort

// Time Complexity: O(N*logN), where N = size of the array.

// Reason: At each step, we divide the whole array, for that logN and n steps are taken for the partition() function, so overall time complexity will be N*logN.

// The following recurrence relation can be written for Quick sort :

// F(n) = F(k) + F(n-1-k)

// Here k is the number of elements smaller or equal to the pivot and n-1-k denotes elements greater than the pivot.

// There can be 2 cases :

// Worst Case – This case occurs when the pivot is the greatest or smallest element of the array. If the partition is done and the last element is the pivot, then the worst case would be either in the increasing order of the array or in the decreasing order of the array.

// Recurrence:
// F(n) = F(0)+F(n-1)  or  F(n) = F(n-1) + F(0)

// Worst Case Time complexity: O(n2)

// Best Case – This case occurs when the pivot is the middle element or near to middle element of the array.
// Recurrence :
// F(n) = 2F(n/2)

// Time Complexity for the best and average case: O(N*logN)

// Space Complexity: O(1) + O(N) auxiliary stack space.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

//.......................................................................................

//Recursive insertion Sort
//Time Complexity: O(N2), (where N = size of the array), for the worst, and average cases.
//Space Complexity: O(N) auxiliary stack space.


#include <iostream>
using namespace std;
void Recursive_Insertion_sort(int index, int arr[], int n)
{
    if (index >= n)
        return;

    int temp = arr[index];
    int i = index - 1;
    for (; i >= 0; i--)
    {
        if (arr[i] < temp)
        {
            break;
        }
        else
        {
            arr[i + 1] = arr[i];
        }
    }
    arr[i + 1] = temp;

    Recursive_Insertion_sort(index + 1, arr, n);
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
    int arr[] = {42,3 ,54, 12, 33, 11, 77, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    Recursive_Insertion_sort(1, arr, size);
    cout << "sorted array : ";
    print_array(arr, size);
}


//.....................................................................................................................

//Recursive Bubble sort
//Time Complexity: O(N2), (where N = size of the array), for the worst, and average cases.
//Space Complexity: O(N) auxiliary stack space.

#include <iostream>
using namespace std;
void Recursive_Bubble_sort(int arr[], int n)
{
   if(n<=1)return;

   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);
   }

   Recursive_Bubble_sort(arr,n-1);

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
    int arr[] = {22,37 ,51, 92, 33, 11, 77, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    Recursive_Bubble_sort(arr, size);
    cout << "sorted array : ";
    print_array(arr, size);
}

//..........................................................................................
//Recursive Bubble Sort (Optimized approach)
// Time Complexity: O(N2) worst and average O(N) for the best case.   // use cnt and check number of itetration yourself for best case 
// Space Complexity: O(N) auxiliary stack space.


#include <iostream>
using namespace std;
void Recursive_Bubble_sort(int arr[], int n)
{
   if(n<=1)return;
   bool swapped=0;
   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
    swapped=1;
    }
   }
   if(swapped==0)return;
   Recursive_Bubble_sort(arr,n-1);

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
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    Recursive_Bubble_sort(arr, size);
    cout << "sorted array : ";
    print_array(arr, size);
}

//........................................................................................................

