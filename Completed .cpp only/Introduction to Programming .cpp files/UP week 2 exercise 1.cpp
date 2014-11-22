#include <iostream>
#include <string>

using namespace std;

int main()
{
    char chInp;
    cout << "Enter something!" << endl;
    cin >> chInp;
    if(chInp >= 'A' && chInp <= 'Z')
    cout << chInp << " is upper-case letter!" << endl;
    else if(chInp >= 'a' && chInp <= 'z')
    cout << chInp << " is a lower case letter!" << endl;
    else
    {
        if(chInp >= 48 && chInp <= 57)
        cout << chInp << " is a number!" << endl;
        else
            cout << chInp << " is a symbol!" << endl;
    }
    return 0;
}
