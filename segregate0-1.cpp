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
  printArr(arr, 12);
  separateZeroOne(arr, 12);
  cout << endl;
  printArr(arr, 12);
  return 0;
}
