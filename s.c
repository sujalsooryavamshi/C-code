#include <stdio.h>  
#include<string.h>  
// create a structure Subject using the struct keyword  
struct Subject  
{  
    // declare the member of the Course structure  
    char sub_name[30];  
    int sub_id;  
    char sub_duration[50];  
    char sub_type[50];  
};  
  
int main()  
{  
    struct Subject sub,*ptr; // declare the Subject variable  
    // create a pointer variable (*ptr)   
    ptr = &sub;/* ptr variable pointing to the address of the structure variable sub */  
      
    strcpy (sub.sub_name, " Computer Science");  
    sub.sub_id = 1201;  
    strcpy (sub.sub_duration, "6 Months");  
    strcpy (sub.sub_type, " Multiple Choice Question");  
  
    // print the details of the Subject;  
    printf (" Subject Name: %s\t ", ptr->sub_name);  
            printf (" \n Subject Id: %d\t ", ptr->sub_id);  
        printf (" \n Duration of the Subject: %s\t ", ptr->sub_duration);  
           printf (" \n Type of the Subject: %s\t ", ptr->sub_type);  
  
    return 0;  
      
}  