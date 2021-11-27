#include<stdio.h>
#include<stdlib.h>

void main(){
	struct Node{
		int data;
		struct Node * next;
	};
	struct Node *head;
	struct Node *newNode;
	struct Node *temp;
	int choice;
	head = 0;
	while(choice){
	newNode = (struct Node*)malloc(sizeof(struct Node));
	printf("enter data : ");
	scanf("%d",&newNode->data);
	newNode->next = 0;
	if(head == 0){
		head = temp = newNode;
	}else{
		temp->next = newNode;
		temp = newNode;
	}
	printf("do you want to continu[y/n]");
	scanf("%d",&choice);
	}
	temp = head;
	while(temp!=0){
		printf("%d ->",temp->data);
		temp = temp->next;
	}
	printf("null");
	
}
