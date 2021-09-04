#include<iostream>

using namespace std;

int main(void)
{
    int n;
    int m;
    int mpoints = 0;
    int c;
    int cpoints = 0;
    cin >> n;
    while (n--)
    {
        cin >> m >> c;
        if(c < m)
        {
            mpoints++;
        }
        else if(c > m)
        {
            cpoints++;
        }
   }
   if(mpoints == cpoints)
   {
       cout << "Friendship is magic!^^" << endl;
   }
   else if (cpoints > mpoints)
   {
       cout << "Chris" << endl;
   }
   else
   {
       cout << "Mishka" << endl;
   }
}