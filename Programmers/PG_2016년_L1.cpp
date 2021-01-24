#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	int cnt = 0;
	vector <string> day = { "FRI","SAT","SUN","MON","TUE","WED","THU" };
	vector <int> month = { 30,29,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 1; i < a; i++)
		cnt += month[i - 1];
	if (a == 1)
		cnt += b - 1;
	else
		cnt += b;
	answer = day.at(cnt % 7);

	return answer;
}

int main()
{
	cout << solution(5, 24);
	return 0;
}