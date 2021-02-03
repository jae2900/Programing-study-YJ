#include <iostream>
using namespace std;


int main()
{
    int x;
    cin >> x;

    if(x < 60)
        cout<< 'F';
    else if(x>59 && x<70)
        cout << 'D';
    else if(x>69 && x<80)
        cout << 'C';
    else if(x>79 && x<90)
        cout << 'B';
    else if(x>89)
        cout << 'A';

}