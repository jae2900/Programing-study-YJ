#include <string>
#include <vector>

using namespace std;

bool solution(string s) 
{
	// 아스키 코드의 범위를 이용하여 숫자인지 판별

    bool answer = true;
    if(s.size() != 4 && s.size() != 6)
        answer = false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<48||s[i]>57)
        {
            answer = false;
            break;
        }
    }



    return answer;
}