#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

// 해시 알고리즘을 이용하여 풀이
// 백터 비교는 sorting을 잘 사용하면 편리하게 할 수 있음

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	sort(phone_book.begin(), phone_book.end());

	for (int i = 0; i < phone_book.size()-1; i++)
	{
		for (int j = i + 1; j < phone_book.size() - 1; j++)
		{
			if (phone_book[i] == phone_book[j].substr(0, phone_book[i].size()))
			return false;
		}
		
	}



	return answer;
}
/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	sort(phone_book.begin(), phone_book.end());
	for (int i = 0; i < phone_book.size() - 1; i++) {
		if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size())) 
			return false;
		
	}
	return answer;
}*/

int main()

{
	vector <string> input = { "123","456","789" };
	
	if (solution(input))
		cout << "true";
	else
		cout << "false";
	
	return 0;
}