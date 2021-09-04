#include<iostream>
#include<list>
 
using namespace std;
 
int main (void) 
{
    int n;
    string c;
    list<string> listofstrings;
    cin >> n;
    while (n--)
    {
        cin >> c;
        listofstrings.push_back(c);
   }
   for (string val : listofstrings)
   {
        if(val.length() >10)
        {
            cout << val[0] <<val.length()-2<< val[val.length()-1] << endl;
        }
        else
        {
            cout << val << endl;
        }
   }
}