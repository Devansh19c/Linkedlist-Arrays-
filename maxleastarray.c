#include<stdio.h>

int main(){


int array[100];
int x;
int i;
int flag;
int max ,least;
printf("Enter the number of elements u want:\n");
scanf("%d" ,&x);


for(i=0;i<x;i++)
{
    printf("enter the value of element %d:" ,i+1); 
    scanf("%d" ,&array[i]);

} 
printf("The given array is :\n");


for(i=0;i<x;i++)
{
    printf("%d " ,array[i]);
    
}

max = array[0];
least = array[0];

for(i=0;i<x;i++)
{
    if(max<=array[i])
    {
         max=array[i];
    }
    if(least>=array[i])
    {
        least=array[i];
    }

}
printf("\nThe max value is %d and the least value is %d" ,max,least);


return 0;
}
