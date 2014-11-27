#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Number rows and columns: ";
    cin >> n;
    cout << endl;
    int matrix[n][n];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
          cout << "matrix element [" << i << "][" << j << "] = ";
          cin >> matrix[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
          if(j == i)
            cout << matrix[i][j] << ' ';
        }
    }
    return 0;
}
