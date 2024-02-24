#include<stdio.h>
#include<stdlib.h>
void quicksort(int *arr,int lb,int ub)
{
     if(lb<ub)
     {
          int loc=partition(arr,lb,ub);
          quicksort(arr,lb,loc-1);
          quicksort(arr,loc+1,ub);
     }
}
int partition(int *arr,int lb,int ub)
{
    int start,end,pivot,loc;
    start=lb; end=ub; pivot=*(arr+lb);
    while(start<end)
    {
     while(arr[start]<=pivot)
     {
         ++start;
     }
     while(arr[end]>pivot)
     {
        --end;
     }
     if(start<end)
     { 
        int temp=arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
     }
    }
     int t=arr[lb];   //swap pivot element with the end element when start is greater than end
     arr[lb]= arr[end];
     arr[end]=t;
     return(end);
}
void display(int *arr,int size)
{
    for(int i=0;i<size;++i)
    {
        printf("%d\t",*(arr+i));
    }
}
main()
{
    int size,*arr,lb,ub;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    arr=(int *)malloc(sizeof(int)*size);
    printf("Enter the elements in the array\n");
    for(int i=0;i<size;++i)
    {
        scanf("%d",arr+i);
    }
    lb=0;
    ub=size-1;
    quicksort(arr,lb,ub);
    display(arr,size);
}
