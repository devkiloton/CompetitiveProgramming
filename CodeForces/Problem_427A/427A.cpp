#include<iostream>

using namespace std;

int main(void)
{
    int events = 0;
    int crimeOrHiring = 0;
    int negativeOrPositive = 0;
    int crime = 0;
    cin >> events;
    while(events--)
    {
        cin >> crimeOrHiring;
        negativeOrPositive += crimeOrHiring;
        if(negativeOrPositive < 0)
        {
            crime++;
            negativeOrPositive = 0;
        }
    }
    cout << crime;
}