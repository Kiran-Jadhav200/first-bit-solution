#include<stdio.h>
int* store(int*,int);
void display(int*, int);
int sumOfArray(int*,int);
void main(){
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
   store(arr,len);
   display(arr,len);


printf("\nsum is  %d ",sumOfArray(arr,len));

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
int sumOfArray(int* nums,int size){
    int sum =0;
for (int i = 0; i < size; i++)
{
   sum += nums[i];  
}
return sum;
}