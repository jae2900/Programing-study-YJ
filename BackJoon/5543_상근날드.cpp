#include <iostream>
#include <algorithm>

using namespace std;




int main()
{
	int num[3] = { 800,700,900 };
	int drink[2] = { 198,330 };
	for (int i = 0; i < 3; i++)cin >> num[i];
	for (int i = 0; i < 2; i++)cin >> drink[i];
	sort(num, num + 3);
	sort(drink,drink+2);
	cout << num[0] + drink[0] - 50;
	return 0;

}
