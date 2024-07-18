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
    printf("\n\nArray is ");
     for (int i = 0; i < len; i++)
    {
        printf("[ %d, ]", arr[i]);
        
    }


for (int i = 0; i < len; i++)
{
    if(arr[i]%2==0)
    printf("\neven: %d \n",arr[i]);
    else 
    printf("\nodd: %d \n",arr[i]);
}


}