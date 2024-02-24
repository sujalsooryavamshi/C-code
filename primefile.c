// prime number file handling
#include<stdio.h>
#include<stdlib.h>
int prime(int num);
void main()
{
    FILE *fp1,*fp2,*fp3;
    int num;
    printf("Enter the numbers(Enter -1 to terminate)\n");
    fp1=fopen("NUMBER.dat","w");
    while(1)
    {
        scanf("%d",&num);
        if(num==-1)
          break;
        else
          fprintf(fp1,"%d\n",num);
    }
    fclose(fp1);
    fp1=fopen("NUMBER.dat","r");
    fp2=fopen("PRIME.dat","w");
    fp3=fopen("Nonprime.dat","w");
    if(fp1==NULL){
      printf("Error\n");
      exit(0);
    }
 while(fscanf(fp1,"%d",&num)!=EOF)
 {
    if(prime(num))
      fprintf(fp2,"%d\n",num);
    else
      fprintf(fp3,"%d\n",num);
 }
  fclose(fp1);
  fclose(fp2);

  fp2=fopen("PRIME.dat","r");
  printf("The prime number from file are as below \n");
  while(fscanf(fp2,"%d",&num)!=EOF)

   printf("%d\n",num);

  fclose(fp2);
}
int prime(int num)
{
    int i;

    if (num <= 1)
        return 0;
    for(i=2;i<=(num/2);++i)
    {
        if(num % i == 0)
          return 0;
    }
    return 1;
     
}



