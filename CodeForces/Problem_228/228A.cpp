
#include <iostream>
using namespace std;
int main(void)
{
    int i[4];
    short changes = 0;
    long newNumber = 10000000000;
    for(int k = 0; k<4; k++)
    {
        cin >> i[k];
    }
    for(int j =0; j<=4; j++)
    {
        for(int k = 0; k<4; k++)
        {
            if(i[j] == i[k] && j!=k)
            {
                i[k] = newNumber++;
                changes++;
            }
        }
    }
    cout << changes << endl;
}