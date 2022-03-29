#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node {
	void *data;
	struct _node *next;

} Node;

typedef struct _linkedlist {
	Node *head;
	Node *tail;
	Node *current;

} LinkedList;

typedef struct employee {
	char name[32];
	unsigned char age;
} Employee;

void initializeList(LinkedList *list) {
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;
}

void addHead(LinkedList *list, void* data) {
	Node *node = (Node*) malloc(sizeof(Node));
	node->data = data;
	if (list->head == NULL) {
	    list->tail = node;
	    node->next = NULL;
	} else {
	   node->next = list->head;
	}
	list->head = node;
}

void addTail(LinkedList *list, void* data) {
	Node *node = (Node*) malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (list->head == NULL) {
	    list->head = node;
	} else {
	    list->tail->next = node;
	} 
	list->tail = node;
}


int main() {
	LinkedList linkedlist;
	Employee *samuel = (Employee*) malloc(sizeof(Employee));
	strcpy(samuel->name, "Samuel");
	samuel->age = 32;
	
	Employee *sally = (Employee*) malloc(sizeof(Employee));
	strcpy(sally->name, "Sally");
	sally->age = 28;

	Employee *susan = (Employee*) malloc(sizeof(Employee));
	strcpy(susan->name, "Susan");
	susan->age = 45;

	initializeList(&linkedlist);

//we can either add head...
	addHead(&linkedlist, samuel);
	addHead(&linkedlist, sally);
	addHead(&linkedlist, susan);

//or add tail
//	addTail(&linkedlist, susan);
//	addTail(&linkedlist, sally);
//	addTail(&linkkedlist, samuel);
	
}
