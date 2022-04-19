/*
An elephant decided to visit his friend. It turned out that the elephant's house is located
at point 0 and his friend's house is located at point x(x > 0) of the coordinate line.
In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine,
what is the minimum number of steps he needs to make in order to get to his friend's house.
*/

#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x))
    {
        int sum=x/5;
        if(x%5!=0)
            sum++;
        printf("%d\n",sum);
        break;
    }
    return 0;
}