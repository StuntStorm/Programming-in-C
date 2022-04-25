//print the first n natural numbers in descending order


#include<stdio.h>
int main()
{
    int n;
	printf("Enter a number : ");
	scanf("%d",&n);

    for(int i = n;i>=1;i--)
        {
         printf("%d ",i);
        }
    printf("\n");
}
