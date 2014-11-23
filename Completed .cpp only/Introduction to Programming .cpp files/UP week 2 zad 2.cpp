#include <iostream>
using namespace std;
int main()
{
    int nPrime;
    cin >> nPrime;
    if (nPrime > 1)
    {
        for(int i = nPrime - 1; i > 1; i--)
        {
            if(nPrime % i == 0)
            {
                cout << boolalpha << false << endl;
                break;
            }
                else if(nPrime % i != 0 && i == 2)
                cout << boolalpha << true << endl;
        }
    }
    else
    cout << boolalpha << false << endl;

    return 0;
}
