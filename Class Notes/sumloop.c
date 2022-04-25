//program to find the sum of first of first N natural numbers


#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);

	//-------------------------------

	// Using While Loop

	/*
	while (i<=n)
    {
        sum = sum + i;
        i++;

    }
    printf("%d\n",sum);
    */

    //-------------------------------

    //  Using For Loop

	/*
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("%d\n",sum);
	*/

    //-------------------------------

	// Using Do-While Loop

	do
    {
        sum = sum + i;
        i++;

    }while(i<=n);
    printf("%d\n",sum);

    //-------------------------------
}