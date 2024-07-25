#include<stdio.h>
int* store(int*,int);
void display(int*, int);
void primeNumber(int*,int);

void main(){
     int n ;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
   store(arr,len);
   display(arr,len);
   primeNumber(arr,len);


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

void primeNumber(int* nums,int size){
    printf("Prime is ");
for(int i =0; i<size; i++ ){//i=1 && 1<7
   int cnt =0;
    for (int j = 2; j <=i/2;j++) //j=0
    {
        if(nums[i]%j==0){ //
            cnt++;
            break;
        }
    }
    if(cnt==0 && i!=1)
    printf("\n%d ",nums[i]);
    
}
}