#include <iostream>

using namespace std;

int main()
{
	int num[2];
	int answer[4];
	cin >> num[0];
	cin >> num[1];
	answer[3] = num[0] * num[1];
	for (int i = 0; i < 3; i++)
	{
		answer[i] = num[1] % 10 * num[0];
		num[1] = num[1] / 10;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << answer[i] << endl;
	}


	return 0;
}