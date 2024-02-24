#include<stdio.h>
void swap(int *p1,int *p2);
main()
{
    int a,b;
    printf ("Enter the number to be swapped \n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Swaped number is : %d %d",a,b);
}
void swap(int *p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}