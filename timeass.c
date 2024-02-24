#include<stdio.h>
struct time
{
   int hh,mm,ss;
};
void read(struct time *s,struct time *p); 
void display(struct time *s,struct time *p);
void add(struct time *s,struct time *p);
main()
{
    struct time s;
    struct time p;
    read(&s,&p);
    display(&s,&p);
    add(&s,&p);
    
}
void read(struct time *s,struct time *p) 
{
    printf("enter the time of first\n");
    scanf("%d %d %d",&s->hh,&s->mm,&s->ss);
    printf("enter the time of second\n");
    scanf("%d %d %d",&p->hh,&p->mm, &p->ss);
}
void display(struct time *s,struct time *p)
{
    printf("The time of 1 is %d:%d:%d\n",s->hh,s->mm,s->ss);
    printf("The time of 2 is %d:%d:%d\n ",p->hh,p->mm,p->ss);
}
void add(struct time *s,struct time *p)
{
    int sum1=0,sum2=0,sum3=0;
    sum1= s->hh + p->hh;
    sum2= s->mm + p->mm;
    sum3=s->ss + p->ss;
    while(sum3>=60)
     {
         sum2+=sum3/60;
         sum3=sum3%60;
     }
    while(sum2>=60)
    {
        sum1+=sum2/60;
        sum2=sum2%60;
    }
     printf("the sum of time is %d %d %d",sum1,sum2,sum3);
}