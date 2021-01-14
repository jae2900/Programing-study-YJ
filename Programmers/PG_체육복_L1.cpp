#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
	int answer = 0;
	vector <int> temp;
	for (int i = 0; i < n; i++)
	{
		temp.push_back(1);
	}
	for (int i = 0; i < reserve.size(); i++)
	{
		temp[reserve[i] - 1]++;
	}
	for (int i = 0; i < lost.size(); i++)
	{
		temp[lost[i] - 1]--;
	}
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == 0)
		{
			if (temp[i - 1] == 2 && i != 0)
			{
				temp[i - 1]--;
				temp[i]++;
			}
			else if (temp[i + 1] == 2 && i != temp.size() - 1)
			{
				temp[i + 1]--;
				temp[i]++;
			}
		}


	}
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp.at(i) != 0)
			answer++;
	}



	return answer;
}

int main()
{
	int x = 5;
	vector <int> t = { 2, 4 };
	vector <int> y = { 1,3,5 };
	cout << solution(x, t, y);
	return 0;

}