#include <bits/stdc++.h>

using namespace std;
void merge(int arr[], int low, int mid, int high)
{
  int n1 = mid - low + 1;
  int n2 = high - mid;
  int left[n1], right[n2];
  for (int i = 0; i < n1; i++)
  {
    left[i] = arr[low + i];
  }
  for (int j = 0; j < n2; j++)
  {
    right[j] = arr[mid + 1 + j];
  }
  int i = 0, j = 0, k = low;
  while (i < n1 && j < n2)
  {
    if (left[i] <= right[j])
    {
      arr[k] = left[i];
      i++;
      k++;
    }
    else
    {
      arr[k] = right[j];
      k++;
      j++;
    }
  }
  while (i < n1)
  {
    arr[k] = left[i];
    i++;
    k++;
  }
  while (j < n2)
  {
    arr[k] = right[j];
    j++;
    k++;
  }
}
void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
void mergeSort(int arr[], int l, int r)
{
  if (r > l)
  {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}
int main()
{
  int arr[] = {4, 3, 5, 4, 6, 7, 8, 5, 1};
  int l = 0;
  int h = 8;
  int m = 4;
  printArr(arr, 9);
  cout << endl;
  mergeSort(arr, l, h);
  printArr(arr, 9);
  return 0;
}
