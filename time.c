#include<stdio.h>
struct time
{
    int hour,minute,second;
};
void time_str(struct time sl[]);
int main()
{
  int  i;
    struct  time sl[2];
    printf("Enter the time details\n");
    for ( i = 0; i < 2; i++)
    {
         printf("Enetr the hours of term %d\n",i+1);
         scanf(" %d",&sl[i].hour);
         printf("Enetr the minutes term %d\n",i+1);
         scanf(" %d",&sl[i].minute);
         printf("Enetr the seconds term %d\n",i+1);
        scanf(" %d",&sl[i].second );
    }
    time_str(sl);
}
 void time_str(struct time sl[])
 {
   int sum1=0,sum2=0,sum3=0,i;
    for ( i = 0; i < 2; i++)
   {
       sum1+=sl[i].hour;
       sum2+=sl[i].minute;
       sum3+=sl[i].second;
   }
   while(sum3>=60)
   {
      sum2+=sum3/60;
      sum3= sum3%60;
   }
   while(sum2>=60)
   {
     sum1+=sum2/60;
     sum2=sum2%60;
   }
     printf("Total hours ,minutes and seconds are as follows\n");
       printf("The total hours is : %d\n",sum1);
       printf("The total minutes is : %d\n",sum2);
       printf("The total seconds is : %d\n",sum3);

 }
 
