#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{// ���ڿ� ��ȯ�Ŀ� �ƽ�Ű�ڵ带 �о���
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