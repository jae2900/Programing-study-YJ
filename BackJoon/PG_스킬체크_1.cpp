#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int x = 10;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=x)
        answer.push_back(arr[i]);
        x=arr[i];
    }
    

    return answer;
}

