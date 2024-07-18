#include<stdio.h>
void main(){
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
    for (int i = 0; i < len; i++)
    {
        printf("enter number at index at %d : ",i+1 );
        scanf("%d", &arr[i]);
    }
    printf("Array is ");
     for (int i = 0; i < len; i++)
    {
        printf("[ %d, ]", arr[i]);
        
    }
printf("\nEnter number you want to searh : ");
int search;
scanf("%d",&search);
for (int i = 0; i < len; i++)
{
   if(search == arr[i])
   printf("Number found at index %d" ,i+1);
   
}

}