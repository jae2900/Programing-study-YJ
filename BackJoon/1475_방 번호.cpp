#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    int N;
    int answer[10] = {0,};
    cin >> N;
    string num = to_string(N);
    for(int i = 0 ;i<num.size();i++)
    {
        answer[num[i]]++;
    }
    sort(answer,answer+10);
    cout << answer[10]<<endl;


}