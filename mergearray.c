#include<stdio.h>
int main(){

int a[10],b[10],c[100];
int x,y;
int i;
int j;
int z;

//first array
printf("Enter the number of elements in first array:\n");
scanf("%d" ,&x);
for(i=0;i<x;i++)
{
 printf("Enter the element %d\n" ,i+1);
 scanf("%d" ,&a[i]);

}
printf("The first array is :\n");

for(i=0;i<x;i++){
    printf("%d\n" ,a[i]);

//second array
printf("Enter the number of elements in second array:\n");
scanf("%d" ,&y);
for(i=0;i<y;i++)
{
 printf("Enter the element %d\n" ,i+1);
 scanf("%d" ,&b[i]);

}
printf("The second array is :\n");

for(i=0;i<y;i++){
    printf("%d\n" ,b[i]);
    
}

for(i=0;i<x;i++)
{
    c[i]=a[i];

}

z=0;
for(j=x;j<x+y;j++)
{
    c[j]=b[z];
    z++;
}

    


printf("The merged array is :\n");

for(i=0;i<x+y;i++)
{
    printf("%d\n" ,c[i]);
    
}

return 0;
}