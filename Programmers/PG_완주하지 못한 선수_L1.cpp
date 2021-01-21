#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// 소팅을 이용하면 같은 것을 찾는것을 간단히 할수 있다.
string solution(vector<string> participant, vector<string> completion) 
{
    string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());

    for(int i = 0; i < participant.size(); i++)
    {
        if(participant[i] != completion[i])
        {
            answer = participant[i];
            break;
        }

    }

    return answer;
}