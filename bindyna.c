#include<stdio.h>
#include<stdlib.h>
int search(int *a,int key,int st,int en);
main()
{
    int *a,n,i,j,temp,loc,key;
    printf("Enter the nor of terms\n");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;++i)
      for(j=0;j<n-1-i;++j)
      {
           if(*(a+j) > *(a+j+1))
           {
               temp = *(a+j+1);
               *(a+j+1) = *(a+j);
               *(a+j) = temp;
           }
      }
    printf("The elementsin arranged order are\n");
    for(i=0;i<n;++i)
     printf("%d\t",*(a+i));
    printf("\n");
    printf("The keyword to be searched\n");
    scanf("%d",&key);
    loc=search(a,key,0,n-1);
    if(loc==-1)
      printf("not Found ");
    else
      printf("found in %d location\n",loc+1);
    free(a);
}
int search(int *a,int key,int st,int en)
{
     while(st<=en)
     {
        int mid;
         mid=(st+en)/2;
         if(key == *(a+mid))
             return(mid);
        else if (key < *(a+mid))
              en=mid-1;
        else
            st=mid+1;
     }
     return -1;
}