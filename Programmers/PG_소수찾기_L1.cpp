#include <iostream>
#include <string>
#include <vector>


using namespace std;
bool check(int a)
{

	for (int j = 2; j < a/2+2; j++)
	{
		if (a%j == 0)
		{
			return false;
		}

	}
	return true;
}

int solution(int n) {
	int answer = 0;
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			if (check(i))
				answer++;
		}
		else if (i == 2)
			answer++;
			
		

	}

	return answer;
}

int main()
{
	cout << solution(10);
	return 0;
}