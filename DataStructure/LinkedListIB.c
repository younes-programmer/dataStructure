#include <stdio.h>
#include <stdlib.h>

void main(){
	struct node{
		int data;
		struct node *next; 
	};
	struct node *head;
	struct node *newNode;
	struct node *temp;
	int choice;
	head = 0;
	while(choice){
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->next = 0;
	printf("enter data : ");
	scanf("%d",&newNode->data);
	if(head == 0){
		head = temp = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
	printf("do you want to continue[1/0]");
	scanf("%d",&choice);
	}
	temp = head;
	while(temp!=0){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("null");
}
