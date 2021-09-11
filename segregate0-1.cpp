#include <bits/stdc++.h>

using namespace std;

void separateZeroOne(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (arr[i] == 1)
    {
      swap(arr[i], arr[j]);
      j--;
    }
    else
    {
      i++;
    }
  }
}

void separate3(int arr[], int n)
{
  int low = 0;
  int high = n - 1;
  int mid = 0;
  while (mid <= high)
  {
    if (arr[mid] == 0)
    {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    }
    else if (arr[mid] == 1)
    {
      mid++;
    }
    else
    {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}
// sanjay kazi
void printArr(int arr[], int m)
{
  for (int i = 0; i < m; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[] = {0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1};
  int a[] = {0, 1, 0, 2, 0, 1, 2, 0, 1, 2, 0};
  printArr(a, 11);
  cout << endl;
  separate3(a, 11);
  printArr(a, 11);
  cout << endl;
  printArr(arr, 12);
  separateZeroOne(arr, 12);
  cout << endl;
  printArr(arr, 12);
  return 0;
}
