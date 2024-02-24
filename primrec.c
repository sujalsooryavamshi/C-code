#include<stdio.h>

main()
{
    int num,res;
    printf("Enter the number\n");
    scanf("%d",&num);
    res=isprime(num,num/2);
    if(res==1)
      printf("Its prime \n");
    else
      printf("Not The prime number\n");
}
int isprime(int num,int div)
{
    if(div==1)
      return(1);
    if(num%div==0)
       return(0);
    else
      return(num,div-1);

}