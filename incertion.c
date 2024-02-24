#include<stdio.h>
#include<stdlib.h>
void read(int *a,int *p);
void sort(int *a,int n);
void print(int *a,int n);
int main()
{
    int *a,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    a=(int *)malloc((sizeof(int)*n));
    read(a,&n);
    sort(a,n);
    print(a,n);
    free(a);
}
void read(int *a,int *p)
{
    int i;
    printf("Enter the elements of array\n");
    for(i=0;i<*p;++i)
    {
        scanf("%d",a+i);
    }
}
void sort(int *a,int n)
{
    int i,j,temp;
    for(i=1;i<n;++i)
    {
        temp=*(a+i);
        j=i-1;
        while(j>=0 && *(a+j)<temp)
        {
            *(a+j+1)=*(a+j);
            j--;
        }
        *(a+j+1)=temp;
    }
}
void print(int *a,int n)
{
    int i;
    for(i=0;i<n;++i)
     printf("%d\t",*(a+i));
}