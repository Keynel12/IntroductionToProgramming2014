#include <iostream>
using namespace std;
int main()
{
	cout << "Enter how many friends you have (max 5): " << endl;
	int frndN;
	cin >> frndN;
	if (frndN <= 5 && frndN > 0)
    {
     cout << "Enter their ages (max 5 positive numbers): " << endl;
	int age[5];
	int min = -1, max = -1;
	for (int i = 0; i < frndN; i++)
    {
       cin >> age[i];
       if (min < age[i])
       min = age[0];
       else if (min > age[i])
       min = age[i];
       if( max < age[i])
       max = age[i];
    }
	cout << "The youngest person is " << min << " years old!" << endl;
	cout << "The oldest person is " << max << " years old" << endl;
    }
	else
    {
    cout << "Invalid input! " << endl;
    return 0;
    }
}

