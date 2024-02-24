#include<stdio.h>
void add(int n,int m,int a[][10],int b[][10]);
void sub(int n,int m,int a[][10],int b[][10]);
main()
{
    int a[10][10],b[10][10],i,j,n,m,p,q,x;
    printf("enter'1' for addition and '2' for substraction\n");
    scanf("%d",&x);
    if(x==1)
    {
      printf("Enter the order of first matrix\n");
      scanf("%d%d",&n,&m);
      printf("enter the order of second matrix\n");
      scanf("%d%d",&p,&q);
      if(n==p && m==q)
      {
         printf("Enter the elements of matrix 1\n");
         for(i=0;i<n;++i)
          for(j=0;j<m;++j)
             scanf("%d",&a[i][j]);
        printf("Enter the elements of matrix 2\n");
        for(i=0;i<p;++i)
          for(j=0;j<q;++j)
             scanf("%d",&b[i][j]);
             add(n,m,a,b);
      }
     else
       printf("Not in order\n");
    }
    else if(x==2)
    {
        printf("Enter the order of first matrix\n");
      scanf("%d%d",&n,&m);
      printf("enter the order of second matrix\n");
      scanf("%d%d",&p,&q);
      if(n==p && m==q)
      {
         printf("Enter the elements of matrix 1\n");
         for(i=0;i<n;++i)
          for(j=0;j<m;++j)
             scanf("%d",&a[i][j]);
        printf("Enter the elements of matrix 2\n");
        for(i=0;i<p;++i)
          for(j=0;j<q;++j)
             scanf("%d",&b[i][j]);
      sub(n,m,a,b);
      }
     else
       printf("Not in order\n");
    }
    else
       printf("Invalid input\n");
}
void add(int n,int m,int a[][10],int b[][10])
{
    int c[10][10],i,j;
    for(i=0;i<n;++i)
      for(j=0;j<m;++j)
         c[i][j]=a[i][j]+b[i][j];
    printf("The added matrix is\n");
     for(i=0;i<n;++i)
     {
      for(j=0;j<m;++j)
      {
        printf("%d\t",c[i][j]);
      }
        printf("\n");
     }
}
void sub(int n,int m,int a[][10],int b[][10])
{
    int c[10][10],i,j;
    for(i=0;i<n;++i)
      for(j=0;j<m;++j)
         c[i][j]=a[i][j]-b[i][j];
    printf("The substracted matrix is\n");
     for(i=0;i<n;++i)
     {
      for(j=0;j<m;++j)
      {
        printf("%d",c[i][j]);
      }
        printf("\n");
     }
}