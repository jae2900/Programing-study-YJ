#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
	string answer = "";

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			answer += "수";
		else
			answer += "박";
	}
	return answer;
}

int main()
{
	cout << solution(5);
	return 0;
}