#include<stdio.h>
int revstr(char *str)
{
    if(*str=='\0')
     return 0;
    else
      revstr(str+1);
      printf("%c",*str);
}
main()
{
     char str[25];
     printf("Enter the string\n");
     scanf("%s",str);
     revstr(str);
}