// 1st lab problem
#include<stdio.h>
#include<string.h>
void revstr(char str[] );
void revint(int num);
void main()
{
    int num,n;
    char str[25];
    printf("Enter '1' to number and '2' string\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter the number\n");
        scanf("%d",&num);
        revint(num);
    }
   else if(n==2)
    {
        printf("Enter the string\n");
        scanf("%s",str);
        //str2=strlen(str)-1;
        revstr(str);
    }
    else
      printf("Invalid input\n");
}
void revint(int num)
{
     int r,y=0;
    while(num>0)
    {
        r=num%10;
        y=(y*10)+r;
        num/=10;
    }
    printf("The reversed number is %d",y);
    
}
void revstr(char str[] )
{
    int t,i,j,l;
    l=strlen(str)-1;
    for(i=0,j=l;i<j;++i,--j)
    {
        t=str[j];
        str[j]=str[i];
        str[i]=t;
    }
    printf("The reversed string is %s",str);

}
