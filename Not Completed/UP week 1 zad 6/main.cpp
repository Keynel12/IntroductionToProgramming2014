#include <iostream>

using namespace std;

int main()
{
    int width, height;
    cout << "Enter width of rectangle: " << endl;
    cin >> width;
    cout << "Enter height of rectangle: " << endl;
    cin >> height;
    int perimeter = 2 * width + 2 * height;
    cout << "Perimeter of the rectangle is: " << perimeter << endl;
    return 0;
}
