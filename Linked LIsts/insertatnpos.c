#include<stdio.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;
void insert(int num,int pos)
{
	int i;
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data=num;
	temp->next=NULL;
	if(pos==1)
	{
		temp->next=head;
		head=temp;
		return;
	}
	struct Node* temp1=head;
	for(i=1;i<pos-1;i++)
	{
		
		temp1=temp1->next;
	}
	temp->next = temp1->next;
	temp1->next=temp;
	
}
   
void print()
{
    struct Node* temp2=head;
   printf("\nThe list is:");
   while(temp2!=NULL)
   {
   	 printf("%d ",temp2->data);
   	 temp2=temp2->next;
   	 
  }	
}
int main()
{
	int n,i,num,pos;
	printf("Enter the numbers you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number:");
		scanf("%d",&num);
		printf("\nEnter the position at which you want to enter:");
		scanf("%d",&pos);
		insert(num,pos);
		print();
	}
	return 0;
}
