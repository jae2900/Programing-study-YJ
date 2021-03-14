#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	int cnt = 0;
	long long num = 0;
	int answer[10] = { 0, };
	cin >> A;
	cin >> B;
	cin >> C;

	num = A * B*C;

	do {
		cnt++;
		answer[num % 10]++;
		num = num / 10;

	} while (num != 0);
	
	for (int i = 0; i < 10; i++)
	{
		cout << answer[i];
	}


	return 0;
}