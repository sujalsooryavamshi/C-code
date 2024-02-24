#include<stdio.h>
void max_min(int*marks,int ,int*,int*);
main()
{
    int marks[20],n,max,min,i;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enetr the marks\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", (marks+i));
    }
    max_min(marks,n,&max,&min);
}
void max_min(int *marks, int n, int *max,int *min)
{
    int i;
     *max= *marks;
     *min= *marks;
    for ( i = 0; i < n; i++)
    {
        if(*(marks+i)> *max)
        {
           *max= *(marks+i);
        }
        if (*(marks+i)< *min)
        {
            *min= *(marks+i);
        }
    }
        
    
    printf("the maximum and ths minimum marks of the student is %d and %d",*max,*min);
}