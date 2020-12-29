#include <iostream>

using namespace std;

void sol()
{
	double a, b;
	double answer = 0;
	while (1) {
		cin >> a >> b;
		if (a > 0 && b < 10 && b != 0)
			break;
		else
			continue;
	}
	answer = a / b;
	cout.precision(15);
	cout << answer;


}

int main()
{
	sol();
	return 0;
}