//Demonstration of loops in C

/*
Different types of loops in C
1. For loop
2. While loop
3. do - while loop
*/

#include<stdio.h>
int main()
{

    /*for (initialization;condition checking;loop variable update)
    {

    }*/

    /*
    for(int i = 1;i<=10;i++)
    {
        printf("StuntStorm\n");
    }
    printf("Bye\n");
    */



    /*
    int i = 1;
    for(;i<=10;i++)
    {
        printf("StuntStorm\n");
    }
    */

    /*
    int i = 1;
    for(;i<=10;i++)
    {
        printf("StuntStorm\n");
    }
    printf("Bye\n");
    */


    /*
    int i = 1;
    for(;;)
    {
        if(i<=10)
        {
            printf("StuntStorm\n");
            i++;
        }
    }
    */


    /*
    int i = 1;
    for(;;)
    {
        if(i<=10)
        {
            printf("StuntStorm\n");
            i++;
        }
        else
        {
            break;
        }
    }
    printf("Bye\n");
    */


    /*
    // PRINT ALL NUMBER USING LOOP
    for(int i = 0;i<=10;i++)
    {
        printf("%d ",i);
    }
    */


    // PRINT INFINITE 0 USING LOOP
    for(int i = 0;i<=10;i+2)
    {
        printf("%d ",i);
    }




}