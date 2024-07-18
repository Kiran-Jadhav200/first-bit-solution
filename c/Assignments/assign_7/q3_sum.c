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

int sum =0;
for (int i = 0; i < len; i++)
{
   sum += arr[i];  
}
printf("\nsum is  %d ",sum);

}