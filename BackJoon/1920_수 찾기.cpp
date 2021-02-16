#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	vector <int> num1, num2;
	vector <int> answer;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		num1.push_back(x);
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int x;
		cin >> x;

		answer.push_back(0);
		num2.push_back(x);
	}
	sort(num1.begin(), num1.end());
	sort(num2.begin(), num2.end());
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (num2[i] == num1[j])
			{
				answer[i] = 1;
				break;
			}
		}
	}
	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << endl;

	return 0;
}