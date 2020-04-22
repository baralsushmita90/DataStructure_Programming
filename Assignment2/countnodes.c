#include<stdio.h>
struct Node{
	int data;
	struct Node* next; 
};
struct Node* head=NULL;
struct Node* tail=NULL;
void insert(int num)
{
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data=num;
	temp->next=NULL;
	if(head==NULL)
	{
		head=tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}
void print()
{
	struct Node* temp=head;
	printf("\nThe list is:");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
	printf("\n");
}
void count()
{
	int c=0;
	struct Node* temp=head;
	while(temp!=NULL)
	{
		
		temp=temp->next;
		c++;
		
	}
	printf("\nNumber of nodes in the list are %d",c);
	
}
int main()
{
	int i,num;
	char ch;
	do
	{
		
		printf("\nEnter the number:");
		scanf("%d",&num);
		insert(num);
		print();
		printf("\nDo you want to enter more numbers?Press Y|N");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	count();
}
