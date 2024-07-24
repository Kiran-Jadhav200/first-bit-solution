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
      printf(" \nReverse Array is ");
   /* 
   Method 1 using reverse loop to print
   
    for (int i = len-1; i >=0; i--)
    {
        printf("[ %d ],", arr[i]);
        
    }
*/
int  i =0, j= len-1;
while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        i++;
        j--;
        
    }
    for (int k = 0; k < len; k++)
    {
        printf(" %d, ",arr[k]);
    }
    

}