#include <iostream>
 
using namespace std;
 
int main(void)
{
    short n;
    short i;
    string answer = "EASY";
    cin >> n;
    while(n--)
    {
        cin >> i;
        if(i==1)
        {
            answer = "HARD";
            n = 0;
        }
    }
    cout << answer <<endl;
}