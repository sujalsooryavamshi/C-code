#include<stdio.h>
// cricket player average
struct cricket
{
    char na[25],tn[25];
    float avg;
};
main()
{
    int i,j,n;
    printf("Enter the details \n");
    printf("Enter the number of teams\n");
    scanf("%d",&n);
    struct cricket ply[n][10];
    for(i=0;i<n;++i)
    {
        printf("Enter the team name %d \n",i+1);
        scanf("%s",ply[i][0].tn);
          for(j=0;j<10;++j)
          {
             printf("Enter the name of player and score\n");
             scanf("%s %f",ply[i][j].na,&ply[i][j].avg);
          }
    }
    printf("The average of players with team list is \n");
    for(i=0;i<n;++i)
    {
        printf("The team name %s and avg are\n",ply[i][0].tn);
        for(j=0;j<10;++j)
          {
             printf("The avg of player %s is %f\n",ply[i][j].na,ply[i][j].avg);
          }
    }
}