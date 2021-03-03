#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, answer = 0;
    int car[5];


    cin >> num;
    for(int i=0;i<5;i++)
    {
        cin >> car[i];
        if(num == car[i])
            answer++;
    }
    cout << answer << endl;
    
    return 0;

}