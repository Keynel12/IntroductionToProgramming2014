#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter the coodrinates of A: " << endl;
    int x, y;
    cin >> x >> y;
    cout << "Enter the coordinates of B: " << endl;
    int z, t;
    //z and t are coordinates x and y for B
    cin >> z >> t;
    double dist;
    dist = sqrt(pow((z - x), 2) + pow((y - t), 2));
    cout << "Distance is: " << dist << endl;
   return 0;
}
