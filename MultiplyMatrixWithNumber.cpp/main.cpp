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
    cout << "Enter number to multiply matrix with:";
    cin >> c;
    cout << endl;
    int matrix[n][m];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
          cout << "element [" << i << "][" << j << "] = ";
          cin >> matrix[i][j];
          matrix[i][j] *= c;
        }

    }
    for(int i = 1; i <= n; i++)
    {
        cout << endl;
        for(int j = 1; j <= m; j++)
        {
          cout << (double)matrix[i][j] << ' ';
        }

    }
    return 0;
}

