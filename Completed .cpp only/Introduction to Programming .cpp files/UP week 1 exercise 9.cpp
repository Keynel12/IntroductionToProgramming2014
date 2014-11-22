#include <iostream>
using namespace std;
int main()
{
    int myAge, currentYear, compareYear;
    cout << "What is your age?"<< endl;
    cin >> myAge;
    cout << "What is the year?" << endl;
    cin >> currentYear;
    cout << "Enter desired year to see how old you will be." << endl;
    cin >> compareYear;
    int yearBirth = currentYear - myAge;
    int futAge = compareYear - yearBirth;
    cout << "You will be: " << futAge << " years old!" << endl;
    if(futAge > 150)
       cout << "Sorry, you will most likely be dead. Unless medicine has developed a lot. A LOT." << endl;
    return 0;
}
