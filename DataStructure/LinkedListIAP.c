#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
int lengthList(){
	struct node* temp;
	temp = head;
	int i;
	while(temp != NULL){
		temp = temp->next;
		++i;
	}
	return i;
}
void Print(){
	struct node* temp = head;
	while(temp!=0){
		printf("%d",temp->data);
		temp = temp->next;
	}
	printf(" null\n");
}
void Insert(int data, int n){
	struct node* newNode;	
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;
	if(n==1){
		newNode->next = head;
		head = newNode;
		return;
	}
	struct node* truv=head;
	for(int i = 0;i<n-2;i++){
		truv = truv->next;
	}
	newNode->next = truv->next;
	truv->next = newNode;
}
void Reverse(){
	struct node* current;
	struct node* prev;
	struct node* suiv;
	struct node* temp;
	current = head;
	while(current != NULL){
		suiv = current->next; //keep the list
		current->next = prev; //change links
		prev = current;	 //update prev node
		current = suiv; //move current

	}
	head = prev;
	temp = head;
	printf("new head is : %d",temp->data);
		
}
int main(){
	head = NULL;
	Insert(2,1);
	Insert(3,2);
	Insert(4,1);
	Insert(5,2);
	Insert(7,1);//7->5->4->3->2
	Print();
	Reverse();
	//Print();//2->3->4->5->7
}
