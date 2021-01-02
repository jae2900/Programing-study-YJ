#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[2000001] = { 0, };

void sol()
{
	int N, C, answer = 0;
	vector <int> number;
	int temp;
	cin >> N >> C;
	
	for (int i = 0; i < N; i++)
	{
	
		cin >> temp;
		number.push_back(temp);
		for (int j = number[i]; j <= C; j += number[i])
		{
			arr[j] = 1;
		}

	}
	for (int i = 0; i <= C; i++)
	{
		if (arr[i] == 1)
			answer++;
	}
	
	cout << answer << endl;
}

int main()
{
	sol();
	return 0;
}
