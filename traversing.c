#include<stdio.h>

int main(){


int array[100];
int x;
int i;
int a;
int flag;

printf("Enter the number of elements u want:\n");
scanf("%d" ,&x);

for(i=0;i<x;i++){
    printf("enter the value of element %d:" ,i+1);
    scanf("%d" ,&array[i]);

}
printf("The given array is :\n");

for(i=0;i<x;i++){
    printf("%d " ,array[i]);
    
}

printf("Enter the element u want to traverse:\n");
scanf("%d" ,&a);

for(i=0;i<x;i++){
   
    if(array[i]==a){
    //  printf("Item found");
       flag=1;
       
    }
    else 
        flag=0;
}
if (flag==1){
    printf("item found");
}
else 
    printf("Item not found");

return 0;
}

