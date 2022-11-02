#include<stdio.h>

int main()
{
int i;
int arr1[10];
int size;
int x;


printf("Enter the Number of elements in the array:\n");
scanf("%d" ,&size);

printf("Enter value of elements\n");

for(i=0;i<size;i++
)

{
 printf("Element number %d :" ,i+1);
 scanf("%d" ,&arr1[i]);

}

printf("The array is as follows:\n");

for(i=0;i<size;i++)
{
 printf("Element number %d : %d\n" ,i+1,arr1[i]);
 
}

printf("Enter the number you want to traverse:\n");
scanf("%d" ,&x);
int flag =0;
for(i=0;i<size;i++)
{
    if(arr1[i]==x)
    {
        flag=1;
        // printf("Element is found at %d" ,i+1);
        break;
    }
    else
    {
        flag=0;
        
        // printf("Element not found");
    }
    

}
// if (flag==0)
// {
//     printf("element not found");
// }
if (flag==1)
{
    printf("Element is found");
}
if (flag==0)
{
    printf("Element not found");
}
return 0;

}