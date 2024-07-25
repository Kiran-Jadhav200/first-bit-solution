//. Reverse the given array. 
#include<stdio.h>
int* store(int*,int);
void display(int*, int);
void ReverseInArray(int* , int );
void printReverse(int * , int );

void main(){
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
   store(arr,n);
   display(arr,n);
      printf(" \nReverse Array is ");
     ReverseInArray(arr,n);
     display(arr,n);
    

}


int* store(int * nums, int size){   //Method 1 using reverse loop to print
for (int i = 0; i < size; i++)
    {
        printf("\nenter number at index at %d : ",i+1 );
        scanf("%d", &nums[i]);
    }
    return nums;

 }

void display(int* nums, int size){
    for (int  i = 0; i < size; i++){
   printf(" %d ", nums[i]);
}

}


void printReverse(int* arr,int len){
 for (int i = len-1; i >=0; i--)
    {
        printf("[ %d ],", arr[i]);
        
    }
}
void ReverseInArray(int* arr, int n){
     
int  i =0, j= n-1;
while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        i++;
        j--;
        
    }
}