
// selection sort

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
  int i, j, min_idx;

  for (i = 0; i < n - 1; i++)
  {
    min_idx = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }

    if (min_idx != i)
      swap(arr[min_idx], arr[i]);
  }
}

void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
    cout << endl;
  }
}

int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, n);
  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}


//...................................................................................

// Bubble sort

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  int i, j;
  bool swapped;
  for (i = 0; i < n - 1; i++)
  {
    swapped = false;
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (swapped == false)
      break;
  }
}

void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << " " << arr[i];
}

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int N = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, N);
  cout << "Sorted array: \n";
  printArray(arr, N);
  return 0;
}
//...................................................................................

// insertion sort

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void printArray(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main()
{
  int arr[] = {12, 11, 13, 5, 6};
  int N = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, N);
  printArray(arr, N);

  return 0;
}

//...................................................................

//Merge sort

void merge(vector<int> &arr, vector<int> &temp, int l, int m, int r)
{

  int i = l, j = m + 1, k = l;

  while (i <= m && j <= r)
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
    }
  }

  while (i <= m)
  {
    temp[k++] = arr[i++];
  }

  while (j <= r)
  {
    temp[k++] = arr[j++];
  }

  for (int a = l; a <= r; a++)
  {
    arr[a] = temp[a];
  }
}

void mergeSort(vector<int> &arr, vector<int> &temp, int l, int r)
{
  if (l < r)
  {
    int m = (l + r) / 2;
    mergeSort(arr, temp, l, m);
    mergeSort(arr, temp, m + 1, r);
    merge(arr, temp, l, m, r);
  }
}




// Merge Sort Complexity
// Time Complexity	 
// Best	O(n*log n)
// Worst	O(n*log n)
// Average	O(n*log n)
// Space Complexity	O(n)
// Stability	Yes
