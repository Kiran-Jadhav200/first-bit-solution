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


int* store(int * nums, int size){
for (int i = 0; i < size; i++)
    {
        printf("enter number at index at %d : ",i+1 );
        scanf("%d", &nums[i]);
    }
    return nums;

 }

void display(int* nums, int size){
    for (int  i = 0; i < 7; i++)
{
   printf(" %d ", nums[i]);
}

}
int max(int* nums, int size){
    int max =INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(max<nums[i])
        max = nums[i];
    }
    return max;
}
int min(int* nums, int size){
    int min =INT_MAX;
    for (int i = 0; i < size; i++)
    {
       if (min>nums[i])
        min = nums[i];
    }
    return min;

}