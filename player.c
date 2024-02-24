//Players list
#include<string.h>
#include <stdio.h>
struct cricket
{
     char name[10];
     char team[15];
     float batavg;
};
int main()
{
    struct cricket c[20];
    int i,j,n;
    char temp[25];
    int t;
    printf("Enter the number of players\n");
    scanf("%d", &n);
    printf("Enter details:\n");
    for (i=0;i<n;i++)
    {
        printf("Enter name, average batting and team name\n");
        scanf("%s%f%s", c[i].name, &c[i].batavg, c[i].team);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(strcmp(c[j].team, c[j+1].team) > 0)
            {
                strcpy(temp,c[j].team);
                strcpy(c[j].team,c[j+1].team);
                strcpy(c[j+1].team,temp);

                strcpy(temp,c[j].name);
                strcpy(c[j].name,c[j+1].name);
                strcpy(c[j+1].name,temp);

                t=c[j].batavg;
                c[j].batavg=c[j+1].batavg;
                c[j+1].batavg=t;
            }
        }
     }
     printf ("Teamwise Player list \n");
     for (i=0; i<n; i++)
        printf("%s\t%s\t%.2f\n", c[i].team, c[i].name, c[i].batavg);
     return 0;
}
