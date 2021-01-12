// 완전 탐색 공부를 위한 코드
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
	vector<int> answer;
	int student1[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
	int student2[10] = { 2, 1, 2, 3, 2, 4, 2, 5};
	int student3[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
	int cnt[3] = { 0, };
	int x[3];
	for (int i = 0; i < answers.size(); i++)
	{
		if (answers.at(i) == student1[i % 10])
			cnt[0]++;
		if (answers.at(i) == student2[i % 8])
			cnt[1]++;
		if (answers.at(i) == student3[i % 10])
			cnt[2]++;
	}
	
	

	for (int i = 0; i < 3; i++)
		x[i] = cnt[i];
	sort(x, x+3);
	for (int i = 0; i < 3; i++)
		if (x[2] == cnt[i])
			answer.push_back(i+1);
	


	return answer;
}

int main()
{
	vector <int> temp = { 5,5,5,5,5 };
	vector <int> ans;
	ans = solution(temp);
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
	}
	cout << endl;
	return 0;
}
