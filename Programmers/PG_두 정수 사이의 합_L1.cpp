#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b)
{
	long long answer = 0;
	long cnt = 0;
	
	if (a - b > 0)
		cnt = a - b + 1;
	else
		cnt = b - a + 1;

	if (cnt % 2 == 0)
		answer = (a + b)*cnt / 2;
	else 
		answer = (a + b) / 2 * cnt;
	

	return answer;
}
int main()
{
	cout << solution(11,14);
	return 0;
}