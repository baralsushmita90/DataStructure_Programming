#include<stdio.h>
struct Node{
	int Data;
	struct Node* link;
};
	struct Node* temp;
	i=0;
void insert_node(int x)
{
	struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node));
	temp1->Data=x;
	temp1->link=NULL;
	temp->link=temp1;
	printf("\nData:%d",temp1->Data);
	printf("\nAdress of node %d is %d",i,temp->link);
	i++;
}
int main()
{
	struct Node* A= NULL;
     temp = (struct Node*) malloc(sizeof(struct Node));
	temp->Data=2;
	temp->link=NULL;
    A=temp;
    printf("\nAdress of head node:%d",A);
    insert_node(3);
    insert_node(4);
    insert_node(5);
	return 0;
}
