#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i;
    p=(int*)malloc(sizeof(p)*2);
    if(p==NULL)
    {
        printf("hi\n");
    }
    else
    {
        printf("Enter the number elements\n");
        scanf("%d",&n);
        for(i=0;i<n;++i)
            scanf("%d",p+i);
        for(i=0;i<n;++i)
             printf("%d",*(p+i));
    }
    free(p);
}