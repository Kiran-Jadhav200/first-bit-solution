#include<stdio.h>
int* store(int*,int);
void display(int*, int);
void evenOddArray(int*,int);
void main(){
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
   store(arr,len);
   display(arr,len);
   evenOddArray(arr,len);

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
void evenOddArray(int* nums,int size){

for (int i = 0; i < size; i++)
{
    if(nums[i]%2==0)
    printf("\neven: %d \n",nums[i]);
    else 
    printf("\nodd: %d \n",nums[i]);
}
}
