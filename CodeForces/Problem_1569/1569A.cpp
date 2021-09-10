#include <iostream>
#include<string>
using namespace std;
int main(void)
{
    short t;
    string s;
    short n;
    string output = "-1 -1";
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        if(n==1)
        {
            output = "-1 -1";
        }
        else
        {
            for(short i =1; i < n; i++)
        {
 
            if(s[i-1] != s[i])
            {
                output = to_string(i) + " " + to_string(i+1);
                n=0;
 
            }
            else
            {
 
                output = to_string(-1) + " " + to_string(-1);
            }
        }
        }
        
        cout << output << endl;
    }
}
