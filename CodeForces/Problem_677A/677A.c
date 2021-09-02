#include<stdio.h>

int main (void) {
    int n;
    int h;
    int friends = 1;
    int temp;
    int width = 0;
    //A minimun width to the friends walk side to side with their heads in a row!
    //Normal width = 1/ bent person = 2
    //The height of i-th person is ai -> (1 <= ai <= 2h)
    //n = number of friends
    //h = height of the fence
    scanf("%i%i", &n, &h);
    while(friends<=n)
    {
        scanf("%i", &temp);
        if(temp <= h)
        {
            width += 1;
        }
        else
        {
            width += 2;
        }
        friends++;
    }
    printf("%i", width);
}