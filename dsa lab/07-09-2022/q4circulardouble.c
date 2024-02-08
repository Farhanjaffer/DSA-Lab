#include <stdio.h>
#include <stdlib.h>




struct Node 
{
	int data; 
	struct Node *nextNode;
	struct Node *prevNode;
};


void displayList(struct Node *tempNode){
	
	struct Node *tempNode1=tempNode; 
	printf("The circular double linked list :\n%d->",tempNode->data);
	tempNode=tempNode->nextNode;
	while(tempNode!=tempNode1) 
	{
		printf("%d->",tempNode->data);
		tempNode=tempNode->nextNode;
	}
	printf("%d\n",tempNode1->data);
	return;
}


int main(){
	struct Node *headNode=NULL,*tempNode,*tempNode1;
	int c;
	
	
	do
	{
		tempNode=(struct Node *)malloc(sizeof(struct Node));
		if(tempNode!=NULL)
		{
			printf("\nEnter the first element of the linked list: ");
			scanf("%d",&tempNode->data);
			tempNode->nextNode=headNode;
			if(headNode==NULL)
			{	
				headNode=tempNode;
				tempNode->prevNode=headNode;
				tempNode->nextNode=headNode;
			}
			else
			{
				tempNode1=headNode;
				while(tempNode1->nextNode!=headNode)
				{
					tempNode1=tempNode1->nextNode;
				}
				tempNode1->nextNode=tempNode;
				tempNode->prevNode=tempNode1;
			}
		}
		else
		{
		printf("\nMemory not allocated");
		}
		printf("\nEnter 1 to add more elements : ");
		scanf("%d",&c);
	}while(c==1);
	
	displayList(headNode);
	
	return 0;
}