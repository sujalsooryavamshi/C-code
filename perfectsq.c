#include<stdio.h>
#include<math.h>
main()
{
    int a[50],n,i,ans;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("elements\n");
    for(i=0;i<n;++i)
       scanf("%d",&a[i]);
    for(i=0;i<n;++i)
    {
        ans=sqrt(a[i]);
        if((ans*ans)==a[i])
           printf("%d\t",a[i]);
    }   
}