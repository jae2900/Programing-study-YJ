#include <string>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
	vector<int> answer;
	// 큐를 사용해서 하면 될거 같음
	queue <int> pro, spd;
	int date = 0, cnt = 0;
	bool flag = false;
	for (int i = 0; i < progresses.size(); i++)
	{
		pro.push(progresses.at(i));
		spd.push(speeds.at(i));
	}


	while (!pro.empty())
	{
		if (date*spd.front() + pro.front() >= 100)
		{
			cnt++;
			pro.pop();
			spd.pop();
			flag = true;
		}
		else 
		{
			if (flag)
			{
				
				answer.push_back(cnt);
				cnt = 0;
			}


			date++;
			flag = false;
		}
		



	}
	answer.push_back(cnt);

	return answer;
}

int main()
{
	vector <int> ans,inp,ins;

	inp = { 93,30,55 };
	ins = { 1,30,5 };


	ans = solution(inp, ins);
	for (int i = 0; i < ans.size(); i++)
		cout << ans.at(i);
	return 0;
}