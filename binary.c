#include<stdio.h>
int bsearch(int n,int a[],int start,int end);
main()
{
    int i,n,a[10],key,loc;
    printf("Enter the n : ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;++i)
     scanf("%d",&a[i]);
   printf("Enter the key to be serached\n");
   scanf("%d",&key);
   loc=bsearch(key,a,0,n-1);
   if(loc==-1)
    printf("Not found");
   else
     printf("Found in %d",loc+1);
    
}
int bsearch(int key,int a[],int start,int end)
{
    int mid;
      while(start<end)
      {
       mid=(start+end)/2;
       if(key==a[mid])
           return (mid);
         else if(key<a[mid])
             end=mid-1;
         else
             start=mid+1;
      }
      return -1;
}