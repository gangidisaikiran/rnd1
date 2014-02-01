#include<stdio.h>
#include<conio.h>
typedef struct{
struct node* next;
int value;
} node;
void main()
{
int num,rem;
node *first,*temp;
printf("enter a number");
scanf("%d",&num);
first=NULL;
while(num!=0)
{
temp=(node *)malloc(sizeof(node));
rem=num%10;
temp->value=rem;
temp->next=first;
first=temp;
num=num/10;
}
temp=first;
while(temp!=NULL)
{
if(temp->next!=NULL)
printf("%d->",temp->value);
else
printf("%d",temp->value);
temp=temp->next;
}
}