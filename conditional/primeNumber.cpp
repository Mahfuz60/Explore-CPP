#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int i;
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << "Not a Prime Number" << endl;
      break;
    }
  }
  if (n == i)
  {
    cout << "prime number" << endl;
  }
  return 0;
}