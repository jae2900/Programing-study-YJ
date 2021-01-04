#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// x~y자르고 sort z번째 수 출력
vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;

    for(int i =0;i<commands.size();i++)
    {
        vector <int> temp;
       
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
            temp.push_back(array[j]);
        sort(temp.begin(),temp.end());
        answer.push_back(temp[commands[i][2]-1]);
    }


    return answer;
}