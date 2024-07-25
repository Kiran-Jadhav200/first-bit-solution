#include<stdio.h>
int* store(int*,int);
void display(int*, int);
void mergeArrays(int*,int*,int,int);

void main(){
   

int n1,n2 ;
    printf("Enter the size of the 1st array: ");
    scanf("%d",&n1);// array 1

    printf("Enter the size of the 2st array: ");
    scanf("%d",&n2);  //array 2

     int arr1[n1],arr2[n2];
    //  int len = sizeof(arr1)/sizeof(int); // size of arr1
    //  int len1 = sizeof(arr2)/sizeof(int); // size of arr2
     //array 1 ----------------------
    store(arr1,n1); 
    display(arr1,n1);
    printf("\nenter Elemets for 2nd arrays");
//array 2 ----------------------------------------------------
   store(arr2,n2);
    display(arr2,n2);
    mergeArrays(arr1,arr2,n1,n2);






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


void mergeArrays(int* arr1,int* arr2, int n1, int n2){
printf("\nmerge  is ");
int merge[n1+n2];
for (int i = 0; i < n1; i++)
{
    merge[i]= arr1[i];
}
for (int i = 0; i < n2; i++)
{
    merge[n1 + i] = arr2[i];
}
for (int i = 0; i < n1+n2; i++)
{
    printf(" [%d], ",merge[i]);
}
}