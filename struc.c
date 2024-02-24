#include<stdio.h>
#include<string.h>

struct student
{
    char name[25];
    char usn[12];
    int sem,age;
};
void read(struct student sl[],int *np);
void sort(struct student sl[],int n);
void swap(struct student *sp1,struct student *sp2);
void print (struct student sl[],int n);
main()
{
   struct student slist[50];
    int n;
    read(slist,&n);
    sort(slist,n);
    print(slist,n);
}
 void read(struct student sl[],int *np)
{
    int i;
    printf("Enter no. of students\n");
    scanf("%d",np);
    printf("Enter the name,usn,sem,age of students\n");
    for(i=0;i<*np;i++)
        scanf("%s%s%d%d",sl[i].name,sl[i].usn,&sl[i].sem,&sl[i].age);
}
void sort(struct student sl[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(strcmp(sl[j].name,sl[j+1].name)>0)
                swap(&sl[j],&sl[j+1]);
}
void swap(struct student *sp1,struct student *sp2)
{
    struct student temp;
    strcpy(temp.usn,sp1->usn);
    strcpy(temp.name,sp1->name);
    temp.sem=sp1->sem;
    temp.age=sp1->age;

    strcpy(sp1->usn,sp2->usn);
    strcpy(sp1->name,sp2->name);
    sp1->sem=sp2->sem;
    sp1->age=sp2->age;

    strcpy(sp2->usn,temp.usn);
    strcpy(sp2->name,temp.name);
    sp2->sem=temp.sem;
    sp2->age=temp.age;
}
void print (struct student sl[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%s %s %d %d\n",sl[i].name,sl[i].usn,sl[i].sem,sl[i].age);
}