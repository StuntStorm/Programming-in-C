// Write a program to read the age and check if he/she can vote or not

#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if( age > 18)
        printf("Yes, You are Eligible to vote\n");
    else
        printf("Nope, You are not Eligible to vote\n");
}

/*
// Using 2 ifs ( Bad Coding )

#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if( age > 18)
    {
        printf("Yes, You are Eligible to vote\n");
    }
    if( age <= 18)
    {
        printf("Nope, You are not Eligible to vote\n");
    }

}
*/