#include<stdio.h>
#include<stdlib.h>
float DivExp(int ,int);
 void main()
{
    
    int a,b,c;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    c=DivExp(a,b);
    printf("The ans is %d \n",c);
}
float DivExp(int a,int b)
{
    float c;
    if(b==0)
    {
      printf("wrong");
        exit(0);
    }
    if(a>0)
    {
        c=(a/b);
    }
    return(c);

}