#include <stdio.h>

int rev(int num); 
int main()
{
    FILE *fp1, *fp2, *fp3;
    int n[10], i, x;

    printf("Enter the number of terms\n");
    scanf("%d", &x);

    fp1 = fopen("Input.dat", "w");
    for (i = 0; i < x; ++i)
        scanf("%d", &n[i]);
   for (i = 0; i < x; ++i)
    {
        fprintf(fp1, "%d ", n[i]); 
    }
    fclose(fp1);
  
    fp2 = fopen("palinnum.dat", "w");
    fp1 = fopen("Input.dat", "r");
    fp3 = fopen("notpallin.dat", "w");
  
    for (i = 0; i < x; ++i)
    {
        if (rev(n[i]))
        {
            fprintf(fp2, "The palindromic number is %d\n", n[i]);
        }
        else
        {
            fprintf(fp3, "Not palindromic %d\n", n[i]);
        }
    
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}

int rev(int num)
{
    int reversed = 0, original = num, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
    {
        return(1); 
    }
    else
    {
        return(0); 
    }
}
