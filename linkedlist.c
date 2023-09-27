#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}linked;
linked *head, *newnode, *temp;
int choice = 0;
int howmuch;

int main(void)
{
	head = 0;

	printf("how many in the list\n");
	scanf("%d", &howmuch);
	printf("enter your linked list collection\n");
	while (choice <  howmuch)
	{
		newnode = (linked*) malloc(sizeof(linked));
		scanf("%d", &newnode->data);
		if (head == 0)
		{	
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		choice++;
	}
	temp = head;
	while (temp != 0)
	{
		printf("%d,", temp->data);
		temp = temp->next;
	}
}
