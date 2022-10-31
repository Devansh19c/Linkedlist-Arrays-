// #include <stdio.h>

// int main() {
//     int a=5;
//     int *p=&a;
    
//     printf("The value stored at address is : %d\n" ,*p);
//     printf("The address of the variable a is :%p" ,p);
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>

// struct Student
// {
//     int id;
//     char name[100];
    
//     float marks;
// } dev,aman;

  
// int main(){
// dev.id=1184;
// aman.id=1169;

// strcpy(dev.name ,"Devansh");

// printf("The name of the student is %s and id is %d" ,dev.name ,dev.id);

// return 0;
// }




#include<stdio.h>
#include<stdlib.h>
void count_of_nodes(struct node* head);
struct node
{
int data;

struct node *link;

};

int main(){
struct node *head= malloc(sizeof(struct node));



head->data=25;
head->link=NULL;

struct node *current=malloc(sizeof(struct node));

current->data=35;
current->link=NULL;
head->link=current;

current->data=3;
current->link=NULL;

current=malloc(sizeof(struct node));
head->link->link=current;

count_of_nodes(struct node*head);


return 0;

}

void count_of_nodes(struct node*head)
{
    int count = 0;

    if (head==NULL)
    {
     printf("Linked List is Empty");

    }
    struct node *ptr=NULL;
    ptr=head;

    while(ptr!=NULL)
    {
        count++;
        printf("%d" ,ptr->data);
        
        ptr=ptr->link;

        
    }
    printf("%d" ,count);

}