// linear search using pointers
#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,i,*p,*key,a[10];
    int s;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<n;++i)
      scanf("%d",&a[i]);
    p=a;
    printf("Enter the elment to be searched\n");
    scanf("%d",&s);
    key=&s;
   for(i=0;i<n;++i)
   {
    if(*(p+i)== *key)
    {
        printf("Found in %d",i+1);
        return(0);
    }
   }     
        printf("Not found\n");
}