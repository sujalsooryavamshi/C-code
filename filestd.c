#include<stdio.h>
#include<stdlib.h>
struct std
{
    char name[25],usn[12];
    int marks,sem;

};
main()
{
    FILE *fp;
    int n,i;
    struct std student[50];
    printf("Enter the number of students\n");
    scanf("%d",&n);
    printf("Enter details\n");
    for(i=0;i<n;++i)
    {
        printf("Enter the NAME, USN , SEM, MARKS of student %d\n",i+1);
        scanf("%s%s%d%d",student[i].name,student[i].usn,&student[i].sem,&student[i].marks);
    }
    fp=fopen("INPUT.TXT","w");
    for(i=0;i<n;++i)
    {
        fprintf(fp,"THE DETAIL OF STUDENT %d\n",i+1);
        fprintf(fp,"NAME :%s\nUSN :%s\nSEM :%d\nMARKS :%d\n",student[i].name,student[i].usn,student[i].sem,student[i].marks);
    }
    fclose(fp);
    fp=fopen("INPUT.TXT","r");
    for(i=0;i<n;++i)
    {
         fscanf(fp,"NAME :%s\nUSN :%s\nSEM :%d\nMARKS :%d\n",student[i].name,student[i].usn,&student[i].sem,&student[i].marks);
         printf("THE DETAILS OF STUDENT %d\n",i+1);
         printf("NAME :%s\nUSN :%s\nSEM :%d\nMARKS :%d\n",student[i].name,student[i].usn,student[i].sem,student[i].marks);
    }
    fclose(fp);
}