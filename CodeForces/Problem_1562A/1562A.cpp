#include <iostream>

using namespace std;

int main(void)
{
    int l;
    int r;
    short t;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        if(r/2 >= l)
        {
            cout << r%((r/2)+1) << endl;
        }
        else
        {
            cout << r%l << endl;
        }
    }
}