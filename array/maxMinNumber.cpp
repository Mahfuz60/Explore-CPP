#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "enter number of array:";
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max_No = INT_MIN;
  int min_No = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    max_No = max(max_No, arr[i]);
    min_No = min(min_No, arr[i]);
  }

  cout << "max Number:" << max_No << endl;
  cout << "min Number:" << min_No << endl;

  return 0;
}