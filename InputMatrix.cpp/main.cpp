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
          cin >> matrix[i][j];
        }

    }
    return 0;
}
