// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
void addnewnode();
struct node
{
    int data;
    
    struct node*link;
    //self referrential structure 
};
struct node *createnode(int data){
    struct node *result = malloc(sizeof(struct node));
    result->data = data;
    result->link = NULL;
    return result;
}
void printlist(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}


int main()
{
    struct node *head, *temp;

    temp = createnode(44);
    temp->link = head;
    head = temp;











//    struct node *head=malloc(sizeof(struct node));
//    head=NULL;
   
//    struct node *ptrnode1=malloc(sizeof(struct node));
//    printf("Enter the data of node1:\n");
//    scanf("%d" ,&ptrnode1->data);
//    ptrnode1->link=NULL;
//    head->link=ptrnode1;
   
//    struct node *ptrnode2=malloc(sizeof(struct node));
//    printf("Enter the data of node2:\n");
//    scanf("%d" ,&ptrnode2->data);
//    ptrnode2->link=NULL;
//    ptrnode1->link=ptrnode2;
   
   
   
    
//    //insertion at the beginning 
//    struct node*newnode=malloc(sizeof(struct node));
//    printf("Enter the data of the new node:\n");
//    scanf("%d" ,&newnode->data);
   
//    newnode->link=head;
//    head=newnode;
   
//    //insertion at the end
   
//    struct node*endnode=malloc(sizeof(struct node));
   
//    printf("Enter the data of the endnode\n");
//    scanf("%d" ,&endnode->data);
   
//    struct node*temp=NULL;
//    temp=head;
   
//    while(temp->link != NULL)
//    {
//     temp=temp->link;
   
//    }
//    temp->link=endnode;
   
//    //printing the whole linked list 
//    int count =0;
   
//    while(temp != NULL)
//    {
//        count++;
//        printf("%d" ,temp->data);
       
//        temp=temp->link;
       
       
//    }printf("The count is %d" ,count);
   
   
   

    
    
return 0;
}

// void addnewnode()
// {
    
// }