#include <iostream>
#include <algorithm> //reverse
#include <string> //string
#include <cmath> //root

using namespace std;

bool is_Prime(int a)// 소수 계한할 경우 제곱근을 취하여 효율성문제를 해결한다
{
    int n = sqrt(a);
    for(int i = 2; i <= n; i++)
    {
        if(a % i == 0)
        {
            return false;
        }     
    }
    return true;
}

bool is_Pal(string originalString, string reverseString)
{
    if(originalString==reverseString)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int answer = 0;

    cin >> answer;
    if(answer==1)
    {
        cout<<2<<endl;
        return 0;
    }
    while(1)
    {
        string palindrome = "";
        string reverse_pal = "";

        palindrome = to_string(answer);
        reverse_pal = to_string(answer);
        reverse(reverse_pal.begin(), reverse_pal.end());

        if(is_Pal(palindrome, reverse_pal))
        {
            if(is_Prime(answer))
            {
                cout << answer << endl;
                return 0;
            }
        }
        answer++;
    }
    return 0;
}
