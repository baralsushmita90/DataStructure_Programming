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
void delete_first_last()
{
	 int i,count=0;
	
	struct Node* temp3=head;
	head=head->next;
	free(temp3);
	struct Node* temp=head;
	struct Node* temp2=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	for(i=0;i<count-2;i++)
	{
		temp2=temp2->next;
	}
	tail=temp2;
	tail->next=NULL;
	free(temp);
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
	int i,num;
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
	printf("\nExisting linked list:");
	print();
	printf("\nHead of the existing list:%d",head->data);
	printf("\nTail of the existing list:%d",tail->data);
	delete_first_last();
	printf("\nList after deleting first and last node");
	print();
	printf("\nHead of the existing list:%d",head->data);
	printf("\nTail of the existing list:%d",tail->data);
	
	return 0;
	}
