#include<stdio.h>
struct sp
{
    int n,m,a[50][50];
}var;
void read(struct sp *var);
void print(struct sp *var);
int main()
{
    struct sp var;    
    read(&var);
    print(&var);
}
void read(struct sp *var)
{  
    int i,j;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&var->n,&var->m);
    printf("Enter the elments of matrix\n");
    for(i=0;i<(var->n);++i)
      for ( j = 0; j <(var->m); j++)
      {
          scanf("%d",&var->a[i][j]);
      }

}
void print(struct sp *var)
{
    int i,j;
    
    for ( i = 0; i < (var->n); i++){
      for ( j = 0; j <(var->m); j++)
       
    {
        printf("%d\t",var->a[i][j]); 
        
    }
    printf("\n");
    }
}