#include<stdio.h>
void up(int a[][10],int n,int m);
void lp(int a[][10],int n,int m);
main()
{
    int a[10][10],n,m,i,j;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of the matrix\n");
    for ( i = 0; i < n; i++)
      for(j=0;j<m;++j)
            scanf("%d",&a[i][j]);
    up(a,n,m);
    lp(a,n,m);    
}
void up(int a[][10],int n,int m)
{
    int i,j,sum=0;
    for(i=0;i<n;++i)
     for(j=0;j<m;++j)
      {
          if(i<j)
          {
             sum+=a[i][j];
          }
      }
    printf("The sum of upper triangular matrix is : %d\n",sum);
}
void lp(int a[][10],int n,int m)
{
    int i,j,sum=0;
    for(i=0;i<n;++i)
     for(j=0;j<m;++j)
      {
          if(i>j)
          {
             sum+=a[i][j];
          }
      }
      printf("The sum of lower triangular matrix is : %d",sum);
}