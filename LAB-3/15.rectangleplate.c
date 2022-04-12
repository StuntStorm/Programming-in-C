/*You have a rectangular plate and you want to add some gilding to it along
the bordering cells so that it forms a golden ring. The plate is a rectangle
that we split into w x h cells. Your task is to compute the number of cells gilded.*/

#include <stdio.h>
int main()
{
    int w,h,k,result,i;
    scanf("%d%d%d",&w,&h,&k);
    result=2*w + 2*h - 4;
    for (i=1; i<k; ++i){
        w=w-4;
        h=h-4;
        result = result + (2*w+2*h-4);
    };
    printf("%d",result);
}