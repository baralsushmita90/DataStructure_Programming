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

struct Node* reverse_list(struct Node* head)
{
	printf("\nInside reverse fn");
	struct Node* current=head;
	struct Node* prev=NULL;
	struct Node* next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		
	}
	head=prev;
	return head;
}

void print(struct Node* head)
{
	struct Node* temp=head;
	printf("\nThe list is:");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
	printf("\n");
	printf("Head :%d",head->data);
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
		print(head);
		printf("\nDo you want to continue?");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	head=reverse_list(head);
	print(head);
}
