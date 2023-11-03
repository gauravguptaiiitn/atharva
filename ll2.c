#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};
struct node *head,*temp,*newnode,*tail,*nextnode;
 void insertbeg(struct node *head,int val)
 {
     newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
	newnode->next=head;
	head=newnode;
		temp=head;
	while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}
 }
  void insertend(struct node *head,int val)
  {
       newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=0;
temp=head;
	while(temp->next!=0)
	{
	    temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=0;
	temp=head;
		while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}
}
void insertatany(struct node *head,int val,int pos)
{
     newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
temp=head;
int i=1;
while(i<pos)
{
    temp=temp->next;
    i++;
}
newnode->next=temp->next;
temp->next=newnode;
temp=head;
		while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}

}
struct node* createll(int size)
{

head=0;
int length=size;

while(length--)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
		
	}
	else
	{temp->next=newnode;
	temp=newnode;
	}
	
}
	temp=head;
	while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}
return head;
}
void delstart(struct node* head)
{
    temp=head;
    head=temp->next;
    	temp=head;
	while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}
    free(temp);
}
void delfromend(struct node*head)
{
    struct node *prevnode;
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head)
    {head=0;
    }
    else{
        prevnode->next=0;
    }
    free(temp);
      	temp=head;
	while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}
    
}
void delfromany(struct node*head,int pos)
{
    int i=1;
    temp=head;
    while(i<(pos-1))
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
      	temp=head;
	while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}
}
void rev (struct node *head)
{
    struct node*prevnode,*currentnode;
    prevnode=0;

currentnode=nextnode=head;
while(nextnode!=0)
{
    nextnode=nextnode->next;
    currentnode->next=prevnode;
    prevnode=currentnode;
    currentnode=nextnode;
}
head=prevnode;
 temp=head;
	while(temp!=0)
	{
	printf("%d",temp->data);
	temp=temp->next;
}
}
int main()
{
	int size;
	 printf("Enter the size of the linked list: ");
    scanf("%d", &size);
   struct node *head = createll(size);
  // delfromany(head,3);
rev(head);
}

