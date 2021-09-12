#include <iostream>
using namespace std;
int main(void)
{
    short t;
    cin >> t;
    while(t--)
    {
        int n, temp;
        cin >> n;
        short a[n];
        short counter = 0;
        short limit = 105;
        if(n == 1)
        {
            cin >>a[n-1];
            printf("YES\n");
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++) 
            {
                for (int j = 1 + i; j < n; j++) 
                {
                    if (a[i] > a[j]) 
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j<n; j++)
                {
                    if(j != i)
                    {
                        if(a[i] - a[j] == 1 || a[i] - a[j] == -1 || a[i] - a[j] == 0)
                        {
                            if(a[i] > a[j] || a[i] == a[j])
                            {
                                limit += 5;
                                a[j] = limit;
                                counter++;
                                if(counter == n-1)
                                {
                                    j = 100;
                                    i=100;
                                }
                            }
                            else if(a[i] < a[j])
                            {
                                limit += 5;
                                a[i] = limit;
                                counter++;
                                if(counter == n-1)
                                {
                                    j = 100;
                                    i=100;
                                }
                            }
                        }   
                    }
                }
            }
            if(n - counter == 1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        
    }
}
