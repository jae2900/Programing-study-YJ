#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	vector <int> answer;
	cin >> num;

	while (num != 0)
	{
		answer.push_back(num % 10);
		num = num / 10;
	}

	sort(answer.rbegin(), answer.rend());
	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i];
	}

	return 0;
}