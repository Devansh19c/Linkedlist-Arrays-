#include<stdio.h>
#include<stdlib.h>
int addnode();
//Defining a Node;
struct node
{
int data;
struct node *link;
//self refferential structure
};


int main()
{

struct node * head  = malloc(sizeof(struct node));
head=NULL;
//************************************************
struct node * node1 = malloc(sizeof(struct node));

printf("Enter the value of the node 1:\n");

scanf("%d" ,&node1->data);
// node1->data=3;
node1->link=NULL;
head=node1;
//**********************************************
struct node *node2= malloc(sizeof(struct node));
// node2->data=4;
printf("Enter the value of the node 2:\n");

scanf("%d" ,&node2->data);
node2->link=NULL;
node1->link=node2;

//***********************************************
struct node * node3 =malloc(sizeof(struct node));
printf("Enter the value of the node 3:\n");

scanf("%d" ,&node3->data);
node3->link=NULL;
node2->link=node3;


//function insert beginning***********************************

struct node * adderptr =malloc(sizeof(struct node));
printf("Enter the value of the node you want to add:\n");

scanf("%d" ,&adderptr->data);
adderptr->link=head;
head=adderptr;


//function insert end
struct node * newnode = malloc(sizeof(struct node));
struct node * tempu = NULL;
printf("Enter the value of the last node :\n");
scanf("%d" ,&newnode->data);
newnode->link=NULL;
tempu=head;
while(tempu->link!=NULL)
{
    tempu=tempu->link;

}
tempu->link=newnode;


//traversing and printing the linked list

struct node * temp = NULL;
temp=head;

while(temp!=NULL)
{

    printf("%d-->" ,temp->data);
    temp=temp->link;

}

return 0;
}

