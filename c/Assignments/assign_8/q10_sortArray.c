//. Reverse the given array. 
#include<stdio.h>
int* store(int*,int);
void display(int*, int);
void sortArray(int* , int );
void main(){
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    store(arr,n);
    display(arr,n);
      printf(" \n sorted Array is ");
      sortArray(arr,n);
      display(arr,n);
   
}


int* store(int * nums, int size){   
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

void sortArray(int* arr, int n){
    for (int i = 0; i < n; i++)
   {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
        
   }
}
