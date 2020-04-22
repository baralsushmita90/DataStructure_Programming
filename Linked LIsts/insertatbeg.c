//insert at end
#include<stdio.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head=NULL;
int insert_end(int num)
{
	 
		struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        struct Node* last;
        temp->data=num;
        temp->next=NULL;
        if(head==NULL)
        {
        	head=temp;
        	last=head;
        	return;
		}
		while(last!=NULL)
		{
			last=last->next;
		}
		last->next=temp;
	    return 0;
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
	int n,i,num;
	printf("\nHow many numbers you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number:");
		scanf("%d",num);
		insert_end(num);
		print();
	}
}
