#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head; //global
void Insert(int data){
	struct node* newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = 0;
	struct node* temp = head;
	if(head == NULL){
		head = newNode; 
	}else{
		while(temp->next != 0){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void print(){
	struct node* temp = head;
	while(temp != 0){
		printf("%d",temp->data);
		temp = temp->next;
	}
	printf("->null");
}
void Delete(int n){
	struct node* truv = head;
	if(n == 1){
		head = truv->next;
		free(truv);
		return;
	}
	for(int i=0;i<n-2;i++){
		truv = truv->next;
	}
	struct node* keep = truv->next;
	truv->next = keep->next;
	free(keep);
}
int main(){
	head = NULL;
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);
	print(); //1->2->3->4->null
	int pos;
	printf("enter position : \n");
	scanf("%d",&pos);
	Delete(pos);
	print();
}
