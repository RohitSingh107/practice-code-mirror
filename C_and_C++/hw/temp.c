#include <stdio.h>
#include <stdlib.h>



/* Structure of a node */
struct node {
int data; // Data
struct node *next; // Address
}*head;


void insertNodeAtBeginning(int data)
{
struct node *newNode;


newNode = (struct node*)malloc(sizeof(struct node));


if(newNode == NULL)
{
printf("Unable to allocate memory.");
}
else
{
newNode->data = data; // Link data part
newNode->next = head; // Link address part


head = newNode; // Make newNode as first node


printf("DATA INSERTED SUCCESSFULLY\n");
}
}
void createList(int n)
{
struct node *newNode, *temp;
int data, i;


head = (struct node *)malloc(sizeof(struct node));


/*
* If unable to allocate memory for head node
*/
if(head == NULL)
{
printf("Unable to allocate memory.");
}
else
{
/*
* Input data of node from the user
*/
printf("Enter the data of node 1: ");
scanf("%d", &data);


head->data = data; // Link data field with data
head->next = NULL; // Link address field to NULL


temp = head;


/*
* Create n nodes and adds to linked list
*/
for(i=2; i<=n; i++)
{
newNode = (struct node *)malloc(sizeof(struct node));


/* If memory is not allocated for newNode */
if(newNode == NULL)
{
printf("Unable to allocate memory.");
break;
}
else
{
printf("Enter the data of node %d: ", i);
scanf("%d", &data);


newNode->data = data; // Link data field of newNode with data
newNode->next = NULL; // Link address field of newNode with NULL


temp->next = newNode; // Link previous node i.e. temp to the newNode

temp = temp->next;
}
}


printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
}
}

int main(){
    
    return 0;
}