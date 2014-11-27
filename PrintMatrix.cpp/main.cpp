#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Number rows: " << endl;
    cin >> n;
    cout << "Number columns: " << endl;
    cin >> m;
    cout << endl;
    int matrix[n][m];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
          cout << "element [" << i << "][" << j << "] = ";
          cin >> matrix[i][j];
        }

    }
    for(int i = 1; i <= n; i++)
    {
        cout << endl;
        for(int j = 1; j <= m; j++)
        {
          cout << matrix[i][j] << ' ';
        }

    }
    return 0;
}
