#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int nNumber = 1234;
  for(int i = 1000; nNumber > 0; i = i / 10)
  {
      int x = nNumber / i;
      nNumber = nNumber % i;
      cout << x << endl;
  }
  return 0;
}

