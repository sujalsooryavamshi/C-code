#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*merge(struct node *s1,struct node *s2);
main()
{
    struct node *head,*newnode1,*temp,*newnode2,*temp2,*head2;
    int choice,choice2;
    head=head2=0;
    printf("Enter the elements of first node in order wise\n");
    while(choice)
    {
    newnode1=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode1->data);
     newnode1->next=0;
    if(head==0)
      head=temp=newnode1;
    else
      temp->next=newnode1;
      temp=newnode1;
    
    printf("Enter the choice(0,1)\n");
    scanf("%d",&choice);
    }
    temp=head;
    while(temp!=NULL)
    {
       printf("%d\n",temp->data);
       temp=temp->next;
    }
    printf("Enter the second list in order wise\n");
     while(choice2)
    {
    newnode2=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode2->data);
     newnode2->next=0;
    if(head2==0)
      head2=temp2=newnode2;
    else
      temp2->next=newnode2;
      temp2=newnode2;
    
    printf("Enter the choice(0,1)\n");
    scanf("%d",&choice2);
    }
    temp2=head2;
    while(temp2!=NULL)
    {
       printf("%d\n",temp2->data);
       temp2=temp2->next;
    }
    head=merge(head,head2);
    temp=head;
    printf("After merging \n");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
struct node*merge(struct node *s1,struct node *s2)
{
    struct node *temp,*prev;
    if(s1==NULL)
    {
       return(s2);
    }
    if(s2==NULL)
      return(s1);
    if(s1->data<=s2->data)
    {
        temp=prev=s1;
        s1=s1->next;
    }
    else{
      temp=prev=s2;
      s2=s2->next;
    }
   while(s1!=NULL && s2!=NULL)
   {
        if(s1->data<=s2->data)
        {
             prev->next=s1;
             s1=s1->next;
             prev=prev->next;
        }
        else
          {
              prev->next=s2;
              s2=s2->next;
              prev=prev->next;
          }
   }
   if(s1!=NULL)
     prev->next=s1;
  else
    prev->next=s2;

  return(temp);
}