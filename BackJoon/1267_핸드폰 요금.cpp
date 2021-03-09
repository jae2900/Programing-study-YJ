#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cnt;
    vector <int> num_Y,num_M;
    cin >> cnt;
    for(int i = 0;i<cnt;i++)
    {
        int x;
        cin >> x;
        num_Y.push_back(x);
        num_M.push_back(x);
    }

    int ans_Y = 0, ans_M = 0;

    for(int i = 0;i<cnt;i++)
    {
        while(num_Y[i] > 0)
        {
            num_Y[i] -= 30;
            ans_Y += 10;
        }
        while(num_M[i] > 0)
        {
            num_M[i] -= 60;
            ans_M += 20;
        }
    }
    if(ans_M > ans_Y)
        cout << "Y " << ans_Y;
    else if(ans_M < ans_Y)
        cout << "M " << ans_M;
    else
        cout << "Y M " << ans_Y;
    

    return 0;
}