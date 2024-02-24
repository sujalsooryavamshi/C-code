#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int square (int num);
void main()
{
    FILE *fp1, *fp2;
    int num;
    printf("Enter the numbers (Enter -1 to stop)\n");
    fp1 = fopen("input.dat", "w");
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        else
            fprintf(fp1, "%d ", num); 
    }
    fclose(fp1);
    fp1 = fopen("input.dat", "r");
    fp2 = fopen("square.dat", "w");
    while (fscanf(fp1, "%d", &num) != EOF)
    {
       if(square(num))
            fprintf(fp2, "%d ", num); 
    }
    fclose(fp2);
    fclose(fp1);

    fp2 = fopen("square.dat", "r");
    printf("The square numbers are\n");
    while (fscanf(fp2, "%d", &num) != EOF)
        printf("%d ", num); 

    fclose(fp2);
}
 int square(int num)
{
   int ans;
   ans=sqrt(num);
    return(ans*ans)==num;
}