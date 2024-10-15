
#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
	int data;
	struct queue *next;
}QUE;
QUE *front=NULL,*rear=NULL;
void Insert()
{
	QUE *newnode;
	newnode=(QUE*)malloc(sizeof(QUE));
	printf("\n Enter the element");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(front==NULL)
		front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void delete()
{
	QUE*temp;
	if(front==NULL)
		printf("\n Queue is empty");
	else
	{
		temp=front;
		front=front->next;
		free(temp);
	}
}
void display()
{
	QUE*temp;
	if(front==NULL)
	printf("\n queue is empty");
	else
	{
		temp=front;
		printf("\n element are");
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
void main()
{
	int choice;
	while(1)
	{
		printf("\n 1.Insert");
		printf("\n 2.delete");
		printf("\n 3.display");
		printf("\n 4.exit");
		printf("\n 5.enter choice");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:Insert();
		  			break;
		  	case 2:delete();
		  			break;
		  	case 3:display();
		  			break;
		  	case 4: exit(0);
		  	default: printf("\n invalid choice");
		}
	}
}

