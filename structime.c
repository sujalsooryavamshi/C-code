#include<stdio.h>
struct time
{
    int h;
    int m;
    int s;
};
struct time *update(struct time *p);
main()
{
    
    struct time s;
    printf("Enter the current time\n");
    scanf("%d%d%d",&s.h,&s.m,&s.s);
    update(&s);
    printf("The updated time is \n");
    printf("%d %d %d",s.h,s.m,s.s);
}
struct time *update(struct time*p)
{
    int i,j,h;
   {
    for(i=p->s;i<60 ;++i)
      {
          printf("updaeted seconds is %d %d %d\n",p->h,p->m,i);
      }
    if(i>=60)
    {
        i=0;
        for(j=p->m;j<60;++j)
            printf("updated min is %d %d %d\n",p->h,j,i);

          if(j>=60)
            {
                j=0;
                for(h=p->h;h<60;++h)
                  {
                    ++p->h;
                     return(p);
                   }
                   
                /*if(() >=60)
                   {
                      p->h=0;
                      return(p);
                   }*/
            }

    }
   }
}