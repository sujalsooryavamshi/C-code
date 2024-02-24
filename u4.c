#include <stdio.h>  
union abc  
{  
    char a;  
    int b;  
};  
int main()  
{  
    union abc var; 
    union abc *ptr; // pointer variable declaration  
    ptr = &var; 
    var.a= 90; 
    var.b=30;  
    printf("The value of a is : %d", ptr->a);  
    return 0;  
}  