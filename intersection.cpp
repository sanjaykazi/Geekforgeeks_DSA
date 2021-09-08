#include <bits/stdc++.h>
using namespace std;
void intersection(int a[], int b[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (i > 0 && a[i] == a[i - 1])
    {
      i++;
      continue;
    }
    if (a[i] < b[j])
    {
      i++;
    }
    if (a[i] > b[j])
    {
      j++;
    }
    else
    {
      cout << a[i] << " ";
      i++;
      j++;
    }
  }
}
int main()
{
  int a[] = {4, 5};
  int b[] = {4, 5, 6, 6, 7, 8, 9};
  intersection(a, b, 2, 7);
  return 0;
}