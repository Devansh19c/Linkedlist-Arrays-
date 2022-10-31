#include<stdio.h>

int main()

{
    int x;
    int i;
    int arr1[10] = {1,2,3,4,5};
    printf("enter the number you want to insert: \n"); 
    scanf("%d" ,&x); 
    
    for(i=5;i>=2;i--)
    {
        arr1[i+1]=arr1[i];
     
    }
    arr1[2]= x;
    
    for(i=0;i<6;i++)
    {
        printf("%d" ,arr1[i]);
    }

 

return 0;
}