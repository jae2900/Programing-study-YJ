#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
	bool answer = true;

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	int p_cnt = 0;
	int y_cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'y' || s[i] == 'Y')
			y_cnt++;
		else if (s[i] == 'p' || s[i] == 'P')
			p_cnt++;
	}
	if (p_cnt == y_cnt)
		answer = true;
	else
		answer = false;


	return answer;
}

int  main()
{
	cout << solution("pPoooY");
	return 0;
}