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
void print(struct Node* temp)
{
	if(temp==NULL)
	return;
	else
	{
		printf(" %d",temp->data);
		print(temp->next);
	}
}
void print_rev(struct Node* temp)
{
	if(temp==NULL)
	return;
	else
	{
		print_rev(temp->next);
		printf(" %d",temp->data);
		
	}
}

int main()
{
	int i,num,el;
	char ch;
	do
	{
		
		printf("\nEnter the number:");
		scanf("%d",&num);
		insert(num);
		printf("\nDo you want to continue?");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("\nList in forward order:");
	print(head);
	printf("\nList in rev order:");
	print_rev(head);
}
