#include <stdio.h>
#include<math.h>
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
	printf("%d \n",temp->data);
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
	printf("%d \n",temp->data);
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
	printf("%d \n",temp->data);
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
	printf("the linked list created is \n:");
	while(temp!=0)
	{
	printf("%d \n",temp->data);
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
	printf("%d \n",temp->data);
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
	printf("%d \n",temp->data);
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
	printf("%d \n",temp->data);
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
	printf("%d \n",temp->data);
	temp=temp->next;
}
}
void mid_ele(struct node *head)
{
    temp=head;
    int c=0;
    while(temp!=0)
    {
        c=c+1;
        temp=temp->next;
    }
    //printf("%f",c);
    int mid=0;
    if(c%2==0)
    {
         mid=(c/2)+1;
    }
    else 
    {
         mid=(c+1)/2;
    }
    temp=head;
    int i=1;
    while(i<mid)
        {
           
            temp=temp->next;
            i++;
        }
         printf("%d \n",temp->data);
         i=0;
    }
    void search(struct node *head)
    {   
        int val;
        printf("enter the val to search\n");
        scanf("%d",&val);
         temp=head;
         int c=1;
	while(temp!=0)
	{   
	   
        if(temp->data==val)
        {       	printf("the value entered is present at position =%d \n",c);
    
                    break;
        }	
        else 
        {
             c=c+1;
            temp=temp->next;
            if(temp==0)
            {
                	printf("the value entered is not  present \n");
            }
        }
}
    }
void single_to_circular()
{
    temp=head;
    
	while(temp!=0)
	{
	printf("%d \n",temp->data);
	temp=temp->next;
}
}

int main()
{
	int size;
	 printf("Enter the size of the linked list: ");
    scanf("%d", &size);
   struct node *head = createll(size);

//insertend(head,9);
//insertbeg(head,9);
//insertatany(head,9,4);
//delstart(head);
//delfromend(head);
//delfromany(head,3);
//rev(head);
//mid_ele(head);
search(head);
}
