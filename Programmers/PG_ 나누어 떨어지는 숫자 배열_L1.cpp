#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//숫자 연산으로 계산하여 코드 작성함
vector<int> solution(vector<int> arr, int divisor) 
{
    vector<int> answer;
    for(int i=0;i<arr.size();i++)
    {
        if(arr.at(i)%divisor == 0)
            answer.push_back(arr.at(i));
        
    }
    if(answer.size() < 1)
        answer.push_back(-1);
    sort(answer.begin(),answer.end());
    return answer;
}