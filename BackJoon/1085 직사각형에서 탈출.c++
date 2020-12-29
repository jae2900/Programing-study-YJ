#include <iostream>
#include <algorithm>


using namespace std;

void sol()
{
    int x, y, w, h;
    int answer[4] = {0,};

    cin >> x >> y >> w >> h;
    answer[0] = x;
    answer[1] = w - x;
    answer[2] = y;
    answer[3] = h - y;
    sort(answer,answer+4);
    cout << answer[0] << endl;


}

int main()
{
    sol();


    return 0;

}