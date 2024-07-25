#include<stdio.h>
int* store(int*,int);
void display(int*, int);
int search(int*,int,int);
void main(){
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
    store(arr,len);
    display(arr,len);
    int ele;
      printf("\nEnter the number you want to search in  array: ");
    scanf("%d",&n);
    printf("element found at index %d",search(arr,len,ele));

}


int* store(int * nums, int size){
for (int i = 0; i < size; i++)
    {
        printf("enter number at index at %d : ",i+1 );
        scanf("%d", &nums[i]);
    }
    return nums;

 }

void display(int* nums, int size){
    for (int  i = 0; i < size; i++){
   printf(" %d ", nums[i]);
}

}

int search(int* nums, int size, int search){

    
    for (int i = 0; i < size; i++)
    {
        if (nums[i]==search)
        {
           return i;
        }
        
    }
    
    
}


