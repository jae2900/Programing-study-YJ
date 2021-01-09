#include <iostream>

using namespace std;

void sol()
{
    int num, n1,n2,n3=0,temp,cnt = 0;

    cin >> num;
    temp = num;
	// 간단한 수학 계산을 통해 코드를 구현함
    while(1)
    {
       
        
        if(temp<10)
            n1 = 0;
        else
            n1=temp/10;
        n2=temp%10;
        n3=(n1+n2)%10;
        temp = n2*10+n3;
        cnt++;
        if(temp == num)
            break;
    }
    cout << cnt <<endl;
}

int main()
{
    sol();
    return 0;
}