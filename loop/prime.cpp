#include <iostream>
using namespace std;
int main()
{
  int n, i;
  cout << "enter your number:";
  cin >> n;
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << "not prime" << endl;
      break;
    }
  }
  if (n == i)
  {
    cout << "prime number" << endl;
  }
  return 0;
}