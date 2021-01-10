#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string>  answer;
	string x;
	while (1)
	{
		string ans, input;
		bool flag = false;
		cin >> input;
		if (input == "0")
			break;
		for (int j = 0; j < input.size() / 2; j++)
		{
			if (input[j] != input[input.size() - 1 - j])
			{
				ans = "no";
				flag = true;
				break;
			}
		}
		if (!flag)
			ans = "yes";
		answer.push_back(ans);
	}

	
	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << endl;
	}
	

	return 0;
}
