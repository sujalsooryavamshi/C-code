#include<stdio.h>
void word(char *p1);
main()
{
    char str[50];
    gets(str);
    word(str);
}
void word(char *p1)
{
    int cnt=0;
    if(*p1!=' ')
      ++cnt;
    while(*p1!='\0')
    {
        if(*p1==' ' && *(p1+1)!='\0' && *(p1+1)!=' ')
              ++cnt;
        ++p1;
    }
    printf("%d",cnt);
}
