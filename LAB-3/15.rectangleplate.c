/*You have a rectangular plate and you want to add some gilding to it along
the bordering cells so that it forms a golden ring. The plate is a rectangle
that we split into w x h cells. Your task is to compute the number of cells gilded.*/

int main()
{
    int w,h;
    scanf("%d%d",&w,&h);
    printf("%d",2*w + 2*h - 4);
}