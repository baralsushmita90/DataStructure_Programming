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
void search(int el)
{
	int i=1;
	struct Node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==el)
		{
			printf("\nElement found at position %d",i);
			break;
		}
		temp=temp->next;
		i++;
		if(temp==tail)
		printf("\nElement not found");
		
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
int main()
{
	int i,num,el;
	char ch;
	do
	{
		
		printf("\nEnter the number:");
		scanf("%d",&num);
		insert(num);
		print();
		printf("\nDo you want to continue?");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("\nEnter the element you want to search:");
	scanf("%d",&el);
	search(el);
}
