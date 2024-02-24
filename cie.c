#include<stdio.h>
struct student
{
    char usn[12],na[25];
    int ia1,ia2,ia3;
    int cta;
};
main()
{    
    int i,small,cie[3];
    struct student a[5];
    printf("enter the details\n");
    for(i=0;i<2;++i)
    {
        printf("Enter the usn and name\n ");
        scanf("%s %s",a[i].usn,a[i].na);
        printf("enter the marks in ia1,ia2,ia3 and cta\n");
        scanf("%d%d%d%d",&a[i].ia1,&a[i].ia2,&a[i].ia3,&a[i].cta);
    }
    for(i=0;i<2;++i)
    {
        small=a[i].ia1;
        if(a[i].ia2 < small)
           small=a[i].ia2;
        if(a[i].ia3 < small)
           small=a[i].ia3;
     cie[i]= a[i].ia1 + a[i].ia2 + a[i].ia3 + a[i].cta - small;
     
    }
    printf("The details are as follows\n");
    printf("usn\tname\tIA1\tIA2\tIA3\tCTA\tCIE\n");
    for(i=0;i<2;++i)
    {
        
        printf("%s   %s   %d   %d   %d   %d   %d\n",a[i].usn,a[i].na,a[i].ia1,a[i].ia2,a[i].ia3,a[i].cta,cie[i]);
        
    }
}