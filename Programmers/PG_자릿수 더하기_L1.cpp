#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{// 문자열 변환후에 아스키코드를 읽었음
	int answer = 0;
	string a = to_string(n);
	for (int i = 0; i < a.size(); i++)
		answer += a[i] - 48;
	return answer;
}

int main()
{
	solution(123);
	return 0;
}