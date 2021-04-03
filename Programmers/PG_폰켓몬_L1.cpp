#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	int cnt = nums.size() / 2;
	int kinds = 1;
	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i] != nums[i + 1])
			kinds++;
	}

	answer = min(cnt, kinds);

	return answer;
}

int main()
{
	vector <int> k = { 3,3,3,2,2,2 };
	cout << solution(k);

	return 0;
}

