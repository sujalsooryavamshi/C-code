#include<stdio.h>
#include<stdlib.h>
struct std
{
    char name[20],usn[12];
};
main()
{
     int n,i;
     printf("Enter the number of students\n");
     scanf("%d",&n);
     struct std *p=(struct std*)malloc(n*sizeof(struct std));
     printf("Enter the details\n");
     for(i=0;i<n;++i)
     {
         printf("Enter the name and usn of student %d\n",i+1);
         scanf("%s%s",p[i].name,p[i].usn);
     }
     printf("The details are\n");
     for(i=0;i<n;++i)
     {
         printf("The info of student %d\n"i+1);
         printf("Name :%s\n",p[i].name);
         printf("USN :%s\n",p[i].usn);
     }
}