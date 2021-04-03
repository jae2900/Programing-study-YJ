#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, answer;
	int temp = 0;
	int cnt[9] = { 0,};
	cin >> N;
	while (N != 0)
	{
		if (N%10 == 6 || N%10 == 9)
			temp++;
		else
		{
			cnt[N%10]++;
		}
		N = N / 10;

	}
	sort(cnt, cnt + 9);
	
	temp = (temp + 1) / 2;
	answer = cnt[8];
	if (answer > temp)
		cout << answer;
	else
		cout << temp;



	return 0;
}
// 100퍼에서 틀렸다고 나옴
