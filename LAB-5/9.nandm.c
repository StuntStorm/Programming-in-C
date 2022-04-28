//Calculate the sum of numbers from m to n 
#include <stdio.h>

int sum(int start,int end);

int main()
{
    int start,end;
    printf("Enter the start of the range: ");
    scanf("%d",&start);
    printf("Enter the end of the range: ");
    scanf("%d",&end);
    printf("The sum of the numbers from %d to %d is %d\n",start,end,sum(start,end));
}

int sum(int start,int end)
{
    int result=0;
    for (int i=start;i<=end;i++)
    {
        result+=i;
    }
    return result;
}
