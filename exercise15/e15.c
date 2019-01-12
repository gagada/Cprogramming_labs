#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*
* struct definition for a node using a doubly-linked-list.
*/

typedef struct Node{
	char *name;
	int birthdate;
	struct Node *next;
	struct Node *prev;
}Node;

typedef struct {
	struct Node *head;
	struct Node *tail;
	int nodeCount;
}DblList;


void insertFront(DblList *listPtr, char *key, int date);
void insertBack(DblList *listPtr, char *key, int date);
void insertSorted(DblList *listPtr, char *key, int date);
Node *find(DblList *listPtr, char *target);
void printForward(DblList *listPtr);
void initList(DblList *lstPtr);
void freeList(DblList *listPtr);

int main(){

	DblList List;
	initList(&List);
	
    char stringName[20];
	int date;

	while(stringName[0] != 'Q' || stringName[0] != 'q'){
		printf("Name (Q to quit): ");
		scanf("%s", stringName);
		if(stringName[0] == 'Q' || stringName[0] == 'q')
			break;
		printf("Birthdate: ");
		scanf("%d", &date);
		insertSorted(&List,stringName,date);
	}

	if (stringName[0] == 'Q'|| stringName[0] == 'q')
		printForward(&List);

	freeList(&List);


	return 0;
}

void insertFront(DblList *listPtr, char *key, int date){
	Node *newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL){
		printf("Unable to create node for the double linked list. ");
		return;
	}
	newNode->name = (char*)malloc(sizeof(key));
	strcpy(newNode->name, key);
	newNode->birthdate = date;
	newNode->next = newNode->prev = NULL;

	if(listPtr->nodeCount == 0)
		listPtr->head = listPtr->tail = newNode;
	else{
		newNode->next = listPtr->head;
		listPtr->head->prev = newNode;
		listPtr->head = newNode;
	}

	listPtr->nodeCount++;
}

void insertBack(DblList *listPtr, char *key, int date){
	Node *newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL){
		printf("Unable to create node for the double linked list. ");
		return;
	}
	newNode->name = (char*)malloc(sizeof(key));
	strcpy(newNode->name, key);
	newNode->birthdate = date;
	newNode->next = newNode->prev = NULL;

	if(listPtr->nodeCount == 0)
		listPtr->head = listPtr->tail = newNode;
	else{
		listPtr->tail->next = newNode;
		newNode->prev = listPtr->tail;
		listPtr->tail = newNode;
	}	

	listPtr->nodeCount++;
}

void insertSorted(DblList *listPtr, char *key, int date){
	Node *newNode = (Node*)malloc(sizeof(Node));
	Node *temp = (Node*)malloc(sizeof(Node));
	if(newNode == NULL){
		printf("Unable to create node for the double linked list. ");
		return;
	}
	newNode->name = (char*)malloc(sizeof(key));
	strcpy(newNode->name, key);
	newNode->birthdate = date;
	newNode->next = newNode->prev = NULL;

	if(listPtr->nodeCount == 0)
		listPtr->head = listPtr->tail = newNode;
	else if(strcmp(listPtr->head->name, newNode->name)>0){
		newNode->next = listPtr->head;
		newNode->next->prev = newNode;
		listPtr->head = newNode;
	}
	else{
		temp = listPtr->head;

		while(temp->next != NULL && strcmp(temp->next->name, newNode->name) < 0)
			temp = temp->next;
		newNode->next = temp->next;
		if(temp->next != NULL)
			newNode->next->prev = newNode;
		temp->next = newNode;
		newNode->prev = temp;
	}
	
	listPtr->nodeCount++;
}

Node *find(DblList *listPtr, char *target){
	Node *p;
	for(p = listPtr->head; p!=NULL; p=p->next){
		if(strcmp(p->name, target) == 0)
			return p;
	}

	return NULL;
}


void printForward(DblList *listPtr){
	Node *p = listPtr->head;
	if(p == NULL){
		printf("LinkedList is empty. ");
		return;
	}
	//printf("Content of the double LinkedList. \n");
	while(p!= NULL){
		printf("%s, %d\n", p->name, p->birthdate);
		p = p->next;
	}
}

void initList(DblList *lstPtr){
  lstPtr->head = NULL;
  lstPtr->tail = NULL;
  lstPtr->nodeCount = 0;
}

void freeList(DblList *listPtr){
   Node *p;
   while (listPtr->head != NULL)
    {
       p = listPtr->head;
       listPtr->head = listPtr->head->next;
       free(p);
    }

}