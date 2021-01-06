#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(int n)
{
	int answer = 0;
	vector <int> temp;
	int num = 1;
	while (n != 0)
	{
		temp.push_back(n % 3);
		n = n / 3;
	}

	for (int i = 0; i < temp.size(); i++)
	{
		answer += temp.at(temp.size()-1-i)*num;
		num *= 3;
	}



	return answer;
}

int main()
{

	cout << solution(45);
	return 0;

}