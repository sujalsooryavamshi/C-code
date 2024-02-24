//enter the output
union abc  
{  
   int a;  
   char b;   
};
int main()  
{  
  union abc var;
  var.a = 66; 
  
  var.b=10;
    

  printf("\n b = %d", var.b);  
}   