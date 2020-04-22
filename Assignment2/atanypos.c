#include<stdio.h>
struct Node{
	int data;
	struct Node* next; 
};
struct Node* head=NULL;
struct Node* tail=NULL;


//function to insert the node at beg of link list
void insert_beg(int num)
{
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data=num;
	if(head==NULL)
	{
		tail=head=temp;
		head->next=NULL;
		
	}
	else
	{
		temp->next=head;
		head=temp;
	}
	
}


//function to insert the node at end of link list
void insert_end(int num1)
{
	printf("\nInside end");
	//print();
	//printf("\nHead:%d",head->data);
	//printf("\nTail:%d",tail->data);
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data=num1;
	temp->next=NULL;
	if(head==NULL)
	{
		head=tail=temp;
	    //tail->next=NULL;
		//head->next=NULL;
	}
	else 
	{
		
		tail->next=temp;
		tail=temp;
	}
	
}


//function to insert node at nth position
void insert_atn(int num2,int n)
{
	int i;
	printf("\nHead:%d",head->data);
	printf("\nTail:%d",tail->data);
	struct Node* temp=(struct Node*) malloc(sizeof(struct Node));
	struct Node* temp2;
	temp->data=num2;
	temp2=head;
	if(head==NULL)
	{   
		head=tail=temp;
		head->next=NULL;
		tail->next=NULL;
		
	}
	if(n==1)
	{
		insert_beg(num2);
		return;
	}
	if(n==2)
	{
		temp->next=head->next;
		head->next=temp;
	}
	
	if(n>2&&head!=NULL)
	{
		for(i=1;i<n-1;i++)
		{
			temp2=temp2->next;
		}
		temp->next=temp2->next;
		temp2->next=temp;
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
	int choice,num,num1,num2,n;
	char ch;
	do
	{
	
	printf("\nEnter your choice:");
	printf("\n1.Add node at beginning:");
	printf("\n2.Add node at end:");
	printf("\n3.Add node at any given position:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("\nEnter the number to enter at begginnig");
		        scanf("%d",&num);
		        insert_beg(num);
		        print();
		        break;
		case 2: printf("\nEnter the number to enter at end");
		        scanf("%d",&num1);
		        insert_end(num1);
		        print();
		        break;
		case 3: printf("\nEnter the number");
		        scanf("%d",&num2);
		        printf("\nEnter the position ");
		        scanf("%d",&n);
		        
	        	insert_atn(num2,n);
	        	print();
		        break;
	}
	printf("\nDo you want to continue?");
	scanf(" %c",&ch);
   }while(ch=='y'||ch=='Y');
	return 0;
}
