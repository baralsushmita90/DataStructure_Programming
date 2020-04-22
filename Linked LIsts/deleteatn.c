
#include<stdio.h>
#include<stdlib.h>
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

void del(int pos)
{
	int i;
    struct Node* temp1 =head;
    struct Node* temp2;
	 if(pos==1)
	 {
	 	head=temp1->next;
	 	free(temp1);
	 	return;
	 }
	for(i=0;i<pos-2;i++)
		temp1=temp1->next;
	temp2=temp1->next;;
	temp1->next=temp2->next;
	free(temp2);
	
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
	int i,num,pos,ch;
	char choice;
	
	do
	{
		printf("\n1.Insert\n2.Delete");
	    scanf("%d",&ch);
	  switch(ch)
		{
			case 1:  printf("\nEnter the number to insert:");
			         scanf("%d",&num);
			         insert(num);
			         print();
			         break;
		    case 2:  printf("\nEnter the position of node to be deleted:");
		             scanf("%d",&pos);
		             del(pos);
		             print();
		             break;
		}
		printf("\nEnter Y|y to continue:");
		scanf(" %c",&choice);
	}while(choice=='Y'||choice=='y');
}
