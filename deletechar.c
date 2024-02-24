#include<stdio.h>
void deletechar(char *p1, char*cr);
main()
{
    char str[50],cr;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the delete character\n");
    scanf("%c",&cr);
    deletechar(str,&cr);
}
void deletechar ( char *p1, char*cr)
{
    char display[50];
   char* p2=display;
    int i,j;
    for ( i = 0,j=0; *(p1+i)!='\0'; ++j)
    {
        if (*(p1+j)== *cr)
              continue;
        else 
        {
          *(p2+i) = *(p1+j);
            ++i;
        }
    
        
        
    }
    puts(p2);
    
    
}