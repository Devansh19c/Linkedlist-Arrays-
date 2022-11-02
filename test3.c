#include<stdio.h>
int array[100];
int array1[100];
int array2[200];
int j;
int i;
int x;//array size
int y;//element traverse 
int q;//another array size 
void addfirstarray();
void addsecondarray();
void traverse();
void addbotharray();
void input();


int main()
{


//Taking integral inputs from user
printf("Hello ! Enter the number of elements of your array :\n");
scanf("%d" ,&x);
printf("Please enter the Elements of your array :\n");


for (i=0;i<x;i++)
{
printf("Element Number [%d] :" ,i+1);
scanf("%d" ,&array[i]);
}

printf("Enter the element you want to detect in the given array:\n");
scanf("%d" ,&y);

int flag=0;

for(i=0;i<x;i++)
{
    if(array[i]==y)
    {
    flag=1;
    break;
    }

    else 
    {
        flag=0;
    }
}

if (flag==1)
{
    printf("The element is found\n");
}
if (flag==0)
{
    printf("The element is not found\n");
    
}

printf("Enter the number of elements for your other array:\n");
scanf("%d" ,&q);

for (i=0;i<q;i++)
{
printf("Element Number [%d] :" ,i+1);
scanf("%d" ,&array1[i]);
}

//adding these two arrays

for(i=0;i<x;i++)
{
    array2[i]=array[i];


}
int c=0;
for(j=x;j<x+q;j++)
{
    array2[j]=array1[c];
    c++;
}

printf("The added array is:\n ");
for(i=0;i<x+q;i++)
{
    printf("\n%d" ,array2[i]);
}
return 0;
}