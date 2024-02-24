#include<stdio.h>

struct student
{
    int Roll_no;
    char USN[15];
    char Name[20];
    int marks[4];
    int total_m;
};

int main()
{
    int i, j, col = 64, row = 50, n;
    struct student s[10];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter details of %d students\n", n);
    
    for (i = 0; i < n; i++)
    {
        printf("Enter roll no of student %d: ", i + 1);
        scanf("%d", &s[i].Roll_no);
        printf("Enter USN of Student %d: ", i + 1);
        scanf("%s", s[i].USN);
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].Name);
        printf("Enter marks of %s\n", s[i].Name);
        s[i].total_m = 0;
        
        for (j = 0; j < 4; j++)
        {
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total_m += s[i].marks[j];
        }
    }
    
    for (i = 0; i < col; i++)
    {
        printf("_");
    }
    
    printf("\n");
    printf("|Roll_no|     USN     |    NAME    | S1 | S2 | S3 | S4 | Total |\n");
    
    for (i = 0; i < col; i++)
    {
        printf("-");
    }
    
    printf("\n");
    
    for (i = 0; i < n; i++)
    {
        printf("|%4d\t|%-13s|%-12s|", s[i].Roll_no, s[i].USN, s[i].Name);
        
        for (j = 0; j < 4; j++)
        {
            printf("%4d|", s[i].marks[j]);
        }
        
        printf("%7d|", s[i].total_m);
        printf("\n");
    }
    printf("\n\n");
    for (i = 0; i < col; i++)
    {
        printf("-");
    }
    
    printf("\n");
    printf("DETAILS OF STUDENT'S WHO SCORED HIGHEST MARKS IN EACH SUBJECT\n");
    
    int max, max_index;
    
    for (j = 0; j < 4; j++)
    {
        max_index=0;
        max = s[0].marks[j];
        for (i = 1; i < n; i++)
        {

            if (max < s[i].marks[j])
            {
                max = s[i].marks[j];
                max_index = i;
            }
        }
        
        printf("Highest marks in subject %d is : %s\n", j + 1, s[max_index].Name);
        printf("Marks scored : %d\n", s[max_index].marks[j]);
        printf("Roll no of student: %d\n", s[max_index].Roll_no);
        printf("USN of Student: %s\n", s[max_index].USN);
        for (i = 0; i < col; i++)
        {
            printf("-");
        }
        printf("\n\n\n");
    }   
}