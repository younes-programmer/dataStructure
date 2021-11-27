#include <stdio.h>
#include <stdlib.h>

void main(){
	struct node{
		int data;
		struct node *next;		
	};
	struct node *head;
	struct node *temp;
	struct node *newNode;
	int choice;
	head = 0;
	while(choice){
	newNode = (struct node*)malloc(sizeof(struct node));
	printf("enter data : ");
	scanf("%d",&newNode->data);
	newNode->next = 0;
	if(head == 0){
		head = temp = newNode;
	}else{
		while(temp->next != 0){
			temp = temp->next;
		}
		temp->next = newNode;
	}
	printf("do you want to continue[1/0]");
	scanf("%d",&choice);
	}
	temp = head;
	while(temp != 0){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("null");
}
