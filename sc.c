#include<stdio.h>
#include<stdlib.h>
struct st 
{
    int n;
    float f;
    char c;
};
int main()
{
    
    struct st s2,s1={12,2.5,'s'};
    // struct st s2;
    s2=s1;
    printf("%d %f %c",s2.n,s2.f,s2.c);
}