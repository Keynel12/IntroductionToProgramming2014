#include <iostream>
using namespace std;
int main()
{
    char favLetter;
    int favMonth, favYear, favNumber;
    cout << "Enter your favourite letter: " << endl;
    cin >> favLetter;
    cout << "Favourite letter: " << favLetter << endl;
    cout << "Enter favourite month, year and number as followed:" << endl;
    cin >> favMonth >> favYear >> favNumber;
    cout << "Your favourite month, year and number are: " << '\n' << favMonth << '\n' << favYear << '\n' << favNumber << endl;
    return 0;
}
