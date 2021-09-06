#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int testCases;
    int width;
    string inputRow;
    cin >> testCases;
    while(testCases--)
    {
        cin >> width;
        cin >> inputRow;
        for(int counter = 0; counter < width; counter++)
        {
            if(inputRow[counter] == 'U')
            {
                inputRow[counter] = 'D';
            }
            else if(inputRow[counter] == 'D')
            {
                inputRow[counter] = 'U';
            }
        }
        cout << inputRow <<endl;
    }
}