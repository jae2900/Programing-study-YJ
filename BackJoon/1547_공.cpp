#include <iostream>

using namespace std;

void sol()
{
    int flag[3] = {0,};
    int x, y, cnt, temp;
    flag[0]=1;
    cin >> cnt;
    for(int i = 0;i<cnt;i++)
    {
        cin >> x >> y;
        x--;
        y--;
        temp = flag[x];
		flag[x] = flag[y];
		flag[y] = temp;

    }
    for(int i = 0;i<3;i++)
    {
        if(flag[i]==1)
        {
           cout << i+1<<endl;
           cnt = 0;
        }
    }
    if(cnt != 0)
        cout << -1<<endl;


}

int main()
{
    sol();
    return 0;
}