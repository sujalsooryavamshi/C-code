#include<stdio.h>
union red
{
    int name[25],usn[11];
    float cgpa;
};
void read(union red *p1);
void print(union red *p2);
void main()
{
    union red var;
    read(&var);
    print(&var);
}
void read(union red *p1)
{
    printf("enter the name\n");
    scanf("%d",&p1->name);
    printf("enter th usn\n");
    scanf("%d",&p1->usn);
}
void print(union red *p2)
{
    printf("Details are name but usn\n");
    printf("%d",p2->name);
}