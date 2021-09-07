#include <iostream>
 
using namespace std;
 
main (void)
{
  int a, b, t;
  cin >> t;
  while(t--)
  {
    cin >> a >> b;
    
    cout << (a^b) + (b^b) << endl;
  }
}