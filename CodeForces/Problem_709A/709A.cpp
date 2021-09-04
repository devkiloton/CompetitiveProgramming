#include <iostream>

using namespace std;

int main(void) {
    int n;
    int b;
    int d;
    int orangeSize;
    int sizeInSection = 0;
    int clearTheSection = 0;
    
    cin >> n >> b >> d;
    
    while(n--)
    {
        cin >> orangeSize;
        if(orangeSize <= b)
        {
            sizeInSection += orangeSize;
            if(sizeInSection> d)
            {
                clearTheSection++;
                sizeInSection = 0;
            }
        }
    }
    cout << clearTheSection;
}