#include<stdio.h>

struct student 
{
    char name[30],usn[30];
    float cgpa;
    int day,month,year;
};
 main()
{   
        struct student s1={"sujal","22sd",4.2,3,4,5};
        struct student s2;
        
    
      printf("%s%s%f%d%d%d",s2.name,s2.usn,s2.cgpa,s2.day,s2.month,s2.year);
}    