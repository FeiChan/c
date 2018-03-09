#include<stdio.h>


typedef struct _node{
	
	void* data;
	struct _node *next;

}Node;

typedef struct _linkedList{


	Node* head;
	Node* tail;
	Node* current;
}LinkedList;

void initializeList(LinkedList* list)
{
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;

}

void addHead(LinkedList *list,void* data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	if(list->head == NULL){
	    list->tail = node;
		node->next = NULL;
	}else{
		node->next = node;
	}
	list->head = node;
}

void addTail(LinkedList *list,void* data)
{
	Node* node=(Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if(list->head == NULL){
	   list->head = node;
	}else{
	   list->tail->next = node;
	}
	list->tail = node;
}

Node* getNode(LinkedList* list,COMPARE compare,void* data)
{
	Node* node = list->head;
	while(node != NULL)
	{
		if(compare(node->data,data) ==0){

			return node;
		}
	}
	return NULL;
}

void delete(LinkedList* list,Node* node)
{
	if(node == list->head){
		if()

	}else{
		Node* tmp = list->head;

	
	}
}

void displayLinkedList(LinkedList* list,DISPLAY display)
{
	printf("\nLinked List\n");
	Node* current = list->head;
	while(current != NULL)
	{
		display(current->data);
		current = current->next;
	}
}

typedef LinkedList Queue;

void initializeQueue(Queue *queue)
{
	initializeList(queue);
}

void enqueue(Queue* queue,void* node)
{
	addHead(queue,node);
}

void* dequeue(Queue* queue)
{
	Node* tmp =queue->head;
	void* data;
	if(queue->head ==NULL){
		data = NULL;
	}else if(queue->head == queue->tail){
	  queue->head = queue->tail = NULL;
	  data = tmp->data;
	  free(tmp);
	}else{

		while(tmp->next != queue->tail)
		{
			tmp = tmp->next;
		}
		queue->tail = tmp;
		tmp = tmp->next;
		queue->tail->next = NULL;
		data = tmp->data;
		free(tmp);
	}
	return data;
}

int main()
{
	

	return 0;
}                                                                                                                                                                                                                                                                                                                          
