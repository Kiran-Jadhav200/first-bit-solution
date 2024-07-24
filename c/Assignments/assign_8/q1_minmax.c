#include<stdio.h>
#include<limits.h>
int* store(int *, int);
void display(int* , int );
int max(int* , int );
int min(int* , int );


void main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
int arr[7];
store(arr,7);
display(arr,7);
printf("\nTHe min value: %d",min(arr,7));
printf("\nThe max value is %d",max(arr,7));




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