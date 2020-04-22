#include<stdio.h>
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
int getNode(struct Node* head, int positionFromTail) {

        int pos,i,data,count =0;
        struct Node* node=head;
        while(head!=NULL)
        {
            head=head->next;
            count++;
        }
        pos=count-positionFromTail;
        for(i=0;i<pos;i++)
        {
            node=node->next;
            
        }
        data=node->data;
        return data;

}
int main()
{
	int i,num,el,t,j,pos_tail,data;
	char ch;
	printf("\nENter the number of test cases:");
	scanf("%d",&t);
	for(j=0;j<t;j++){
	printf("Test case %d:",j);
	do
	{
		
		printf("\nEnter the number in linked list %d:",j);
		scanf("%d",&num);
		insert(num);
		print();
		printf("\nDo you want to continue?");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("\nEnter the position from tail:");
	scanf("%d",&pos_tail);
	data=getNode(head,pos_tail);
	printf("\nData at node:%d",data);
	
   }
   return 0;
}
