#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = s;
	sort(s.rbegin(), s.rend());
	
	return s;
}

int main() 
{
	cout << solution("Zbcdsdfefefg");
	return 0; 
}