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

for(i=0;i<x;i++){
    if(array[i]%2==0){
        array[i]=array[i]/2;
        // Array manipulation
    }
    else
        array[i]=array[i]*2;
}
printf("\nThe new array is :");
for(i=0;i<x;i++){
    printf("%d " ,array[i]);
    
}

return 0;
}