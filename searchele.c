#include<stdio.h>
int search(int arr[],int n,int key);
main()
{
    int arr[20],n,i,key;
    printf("Enter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
       scanf("%d",&arr[i]);
    printf("Enter the number to be searched\n");
    scanf("%d",&key);
    int result=search(arr,n,key);
    if(result==-1)
        printf("Not found\n");
    else 
      printf("Found in the position %d",result);
}
int search(int arr[],int n,int key)
{
    if(n==0)
      return(-1);
    else{
      if(arr[n-1]==key)
        return(n);
     else
       search(arr,n-1,key);
    }
}