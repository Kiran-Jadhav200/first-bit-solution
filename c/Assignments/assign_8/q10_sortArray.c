//. Reverse the given array. 
#include<stdio.h>
void main(){
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
    for (int i = 0; i < len; i++)
    {
        printf("enter number at index at %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Array is ");
     for (int i = 0; i < len; i++)
    {
        printf("[ %d ],", arr[i]);
        
    }
      printf(" \n sorted Array is ");
   for (int i = 0; i < len; i++)
   {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
        
   }
   for (int i = 0; i < len; i++)
   {
   printf(" %d ",arr[i]);
   }
   
   
    

}