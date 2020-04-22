#include<stdio.h>
struct Node{
	int data;
	struct Node* next; 
};
struct Node* head=NULL;
void insert(int num)
{
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data=num;
	temp->next=head;
	head=temp;
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
	int i,n,num;
	printf("\nHow many numbers you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		printf("\nEnter the number:");
		scanf("%d",&num);
		insert(num);
		print();
	}
}
