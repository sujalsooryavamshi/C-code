#include <stdio.h>
//even odd
void main()
{
    FILE *fp1, *fp2, *fp3;
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
    fp2 = fopen("even.dat", "w");
    fp3 = fopen("odd.dat", "w");
    while (fscanf(fp1, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
            fprintf(fp2, "%d ", num); 
        else
            fprintf(fp3, "%d ", num);
    }
    
    fclose(fp2);
    fclose(fp3);
    fclose(fp1);

    fp2 = fopen("even.dat", "r");
    printf("The even numbers are\n");
    while (fscanf(fp2, "%d", &num) != EOF)
    {

        printf("%d ", num);
    }
    fclose(fp2);

    fp3 = fopen("odd.dat", "r");
    printf("\nThe odd numbers are\n");
    while (fscanf(fp3, "%d", &num) != EOF)
    {
        printf("%d ", num); 
    }
    fclose(fp3);
}
