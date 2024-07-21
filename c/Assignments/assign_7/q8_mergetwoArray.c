#include<stdio.h>
void main(){
    int n1,n2 ;
    printf("Enter the size of the 1st array: ");
    scanf("%d",&n1);//5

    printf("Enter the size of the 2st array: ");
    scanf("%d",&n2);//4



     int arr1[n1],arr2[n2];
     int len = sizeof(arr1)/sizeof(int);//5
     int len1 = sizeof(arr2)/sizeof(int);//4
     //array 1 ----------------------
    printf("enter values for 1st array:");
    for (int i = 0; i < n1; i++)//
    {
        printf("\nenter number at index at %d : ",i );
        scanf("%d", &arr1[i]);//1,2,3,
    }
    printf("\n\nArray is ");
     for (int i = 0; i < n1; i++)
    {
        printf("[ %d ],", arr1[i]);
        
    }
//array 2----------------------------------------------------
  printf("\nenter values for 2st array:");
    for (int i = 0; i < n2; i++)
    {
        printf("\nenter number at index %d: ",i );
        scanf("%d", &arr2[i]);
    }
    printf("\n\nArray is ");
     for (int i = 0; i < n2; i++)
    {
        printf(" [ %d ],", arr2[i]);
        
    }
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