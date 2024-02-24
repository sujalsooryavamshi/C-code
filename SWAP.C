#include<stdio.h>
void swap(int *p1,int *p2);
main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("before %d %d",x,y);
    swap(&x,&y);
    printf("after %d %d",x,y);
}
void swap(int *p1,int *p2)
{
    int t;
    t= *p1;
    *p1 = *p2;
    *p2=t;
}