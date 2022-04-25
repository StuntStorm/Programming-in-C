//write a program to find the product of first n natural numbers using for loop and while loop

#include<stdio.h>
int main()
{
	int n,i,p=1;
	printf("Enter a number : ");
	scanf("%d",&n);

	//-------------------------------

	// Using While Loop


	while (i<=n)
    {
        p = p * i;
        i++;
    }
    printf("%d\n",p);



    //-------------------------------

    //  Using For Loop

	/*
	for(i=1;i<=n;i++)
	{
		p = p * i;
	}
	printf("%d\n",p);
	*/

    //-------------------------------

	// Using Do-While Loop
    /*
	do
    {
        p = p * i;
        i++;

    }while(i<=n);
    printf("%d\n",p);
    */
    //-------------------------------
}