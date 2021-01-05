#include <iostream>
#include <vector>

using namespace std;

int solution(int a, int b)
{
	int answer = 0;
	int temp = 1, num = 1;
	int cnt = 0;
	for (int i = 0; i < a - 1; i++)
	{
		cnt++;
		if (num == temp)
		{
			num++;
			temp = 1;
		}
		else
			temp++;
	}
	for (int i = a - 1; i < b; i++)
	{
		cnt++;
		answer += num;
		if (num == temp)
		{
			num++;
			temp = 1;
		}
		else
			temp++;
	}




	return answer;
}

int main()
{
	int A, B;
	cin >> A >> B;
	cout << solution(A, B);
	return 0;
}