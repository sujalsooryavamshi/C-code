// 9 th lab problem
#include<stdio.h>
char *strcopy(char *p1,char *p2);
void strcom(char *p1,char *p2);
main()
{
    
    char str1[25],str2[25];
    printf("Enter the two strings\n");
    scanf("%s%s",str1,str2);
    strcom(str1,str2);
    strcopy(str1,str2);
    printf("%s",str1);
}
 char  *strcopy(char *p1,char *p2)
{
   int i;
     while(*p1!='\0')
       ++p1;
    while(*p2!='\0')
    {
       *p1=*p2;
       ++p2;
       ++p1;
    }
    *p1='\0';
   return(p1);
}
void strcom(char *p1,char *p2)
{
    while(*p1==*p2 && *p1!='\0' && *p2!='\0')
    
    {
      ++p1;
      ++p2;
     }
    if(*p1=='\0' && *p2=='\0')
        printf("string is equal\n");
    else
      printf("string are not equal\n");
}