#include<stdio.h>
main()
{
    FILE *fp;
    int num,a[10],i,n;
    fp=fopen("marks.dat","w");
    printf("Enter the terms\n");
    scanf("%d",&num);
    printf("enter the marksof students\n");
    for(i=0;i<num;++i)
    {
       scanf("%d",&a[i]);
       fprintf(fp,"%d\n",a[i]);
    }
    printf("The pointer is pointing to %d\n",ftell(fp));
    fclose(fp);
    fp=fopen("marks.dat","a+");
    fseek(fp,4,2);
    rewind(fp);
    printf("The pointer is pointing to %d",ftell(fp));
    for(i=0;i<num;++i)
    {
       while((n=fscanf(fp,"%d",&a[i]))!=EOF)
            printf("%d",n);
    }
}