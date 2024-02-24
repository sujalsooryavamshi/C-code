#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char *buffer;
    buffer=(char *)malloc(10);
    if(buffer==NULL)
       printf("Not allocated memory\n");
    strcpy(buffer,"Prerana");
    printf("Size of buffer %d\n", _msize(buffer));
    printf("String in buffer is %s\n",buffer);
    buffer=realloc(buffer,15);
    if(buffer==NULL)
      printf("realocation failed\n");
    strcpy(buffer,"sujal");
    printf("Size of reallocated buffer %d\n", _msize(buffer));
    printf("New string in buffer is %s\n",buffer);


}
