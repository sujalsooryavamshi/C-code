#include<stdio.h>
struct std
{
    int s[3],roll,total;
    char usn[12],name[25];
}
main()
{
    int n,i=0,j=0;
    struct std slist[50];
    printf("Enter the number of students : ");
    scanf("%d",&n);
    
      while(i<n)
    {
       printf("Enter the rollno of student %d : ",i+1);
       scanf("%d",&slist[i].roll);
       printf("\n");
       printf("Enter USN of student%d :",i+1);
       scanf("%s",slist[i].usn);
       printf("\n");
       printf("Enter NAME of students%d :",i+1);
       scanf("%s",slist[i].name);
       for(j=0;j<3;++j){
       printf("Enter marks in subject %d:",j+1);
       scanf("%d",&slist[i].s[j]);
       }
       slist[i].total=0;
       ++i;
    }
      i=0;
       while(i<n)
       {
         for(j=0;j<3;++j)
           slist[i].total+=slist[i].s[j];
           ++i;
       }

       
    
    for(i=0;i<64;++i)
    {
     printf("-");
    }
    printf("\n");
    printf("|Roll_no|     USN     |    NAME    | S1 | S2 | S3 | total |\n");
    i=0;
    while(i<n)
    {
       printf("|%4d\t|%-13s|%-12s|", slist[i].roll, slist[i].usn, slist[i].name);
       for(j=0;j<3;++j)
       { 
        printf("%4d|",slist[i].s[j]);
       }
       printf("%7d|\n",slist[i].total);
      ++i;
      
    }
    for(i=0;i<64;++i)
    {
     printf("-");
    }
}
