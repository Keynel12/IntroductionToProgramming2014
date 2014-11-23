#include <iostream>

using namespace std;

int main()
{
   int n;
   char c;
   cin >> n;
   cin >> c;
   if(n >= 2 && n <= 100)
   {
     for (int i = 0; i < n; i++)
        cout << c << ' ';
     for(int i = n - 1; i > 0; i--)
     {
         cout << endl;
         for(int j = 0; j < n*2 - 2; j++)
         {
            if(j == n - i || j == n + i - 2)
                cout << c;
            else
                cout << ' ';
         }
     }
   }
   else
     cout << "not in interval..." << endl;
}
//* * * * *
// *     *
//  *   *   nailed it
//   * *
//    *
