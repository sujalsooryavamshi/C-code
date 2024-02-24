//multiplication of martrix modular approach
#include<stdio.h>
void multi(int n,int m,int q,int a[][10],int b[][10]);
main()
{
    int a[10][10],b[10][10],n,m,i,j,p,q;
    printf("Enter the order of the matrix one\n");
    scanf("%d %d",&n,&m);
    printf("Enter the order of the second matrix\n");
    scanf("%d%d",&p,&q);
    if (m==p)
    {
      printf("Enter the elements of the matrix\n");
         for(i=0;i<n;++i)
           for(j=0;j<m;++j)
                  scanf("%d",&a[i][j]);
      printf("Enter the elements of second matrix\n");
         for(i=0;i<p;++i)
           for(j=0;j<q;++j)
             scanf("%d",&b[i][j]);
    }
     else
       printf("Invalid order\n" );
        multi(n,m,q,a,b);
}
void multi(int n,int m,int q,int a[][10],int b[][10])
{
    int c[10][10],i,j,k;
    for(i=0;i<n;++i)
    {
     for(j=0;j<m;++j)
     {
        c[i][j]=0;
     for(k=0;k<m;++k)
          c[i][j] += a[i][k] * b[k][j];
     }
    }
    printf("The muultiplied matrix is\n");
    for(i=0;i<n;++i)
    {
     for(j=0;j<q;++j)
       printf("%d\t",c[i][j]);
    printf("\n");
    }
}