// 그리디 알고리즘 
#include <iostream>
#include <vector>

using namespace std;

void solution()
{
	int N, K, answer = 0;
	vector <int> value;
	int x;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		value.push_back(x);
	}
	int cnt = value.size() - 1;
	while (1)
	{
		if (K >= value.at(cnt))
		{
			K -= value.at(cnt);
			answer++;
		}
		else
			cnt--;
		if (K == 0)
			break;

	}
	cout << answer << endl;

}

int main()
{
	solution();

	return 0;
}
