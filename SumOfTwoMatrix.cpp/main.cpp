#include <iostream>

using namespace std;

int main()
{
    int n, m;
    double c;
    cout << "Number rows: ";
    cin >> n;
    cout << "Number columns: ";
    cin >> m;
    cout << endl;
    int matrix[n][m], matrixTwo[n][m];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
          cout << "matrix 1: element [" << i << "][" << j << "] = ";
          cin >> matrix[i][j];
        }
    }
    cout << "matrix 2:" << endl;
    for(int p = 1; p <= n; p++)
    {
        for(int k = 1; k <= m; k++)
        {
          cout << "matrix 2: element [" << p << "][" << k << "] = ";
          cin >> matrixTwo[p][k];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << endl;
        for(int j = 1; j <= m; j++)
        {
          cout << matrix[i][j] + matrixTwo[i][j] << ' ';
        }

    }
    return 0;
}

