#include <iostream>

using namespace std;

int main()
{
    double price;
    cout << "Enter the price of the product : " << endl;
    cin >> price;
    double numberItems;
    cout << "Enter how many items are you buying:" << endl;
    cin >> numberItems;
    double vat = 0.2;
    double finalsum;
    finalsum = (price * numberItems) * vat;
    cout << "You are paying " << finalsum << " in taxes!" << endl;
    return 0;
}
