#include<stdio.h>
void main(){
    int n1,n2 ;
    printf("Enter the size of the 1st array: ");
    scanf("%d",&n1);

    printf("Enter the size of the 2st array: ");
    scanf("%d",&n2);



     int arr1[n1],arr2[n2];
     int len = sizeof(arr1)/sizeof(int);
     int len1 = sizeof(arr2)/sizeof(int);
     //array 1 ----------------------
    printf("enter values for 1st array:");
    for (int i = 0; i < len; i++)
    {
        printf("enter number at index at %d : ",i+1 );
        scanf("%d", &arr1[i]);
    }
    printf("\n\nArray is ");
     for (int i = 0; i < len; i++)
    {
        printf("[ %d ],", arr1[i]);
        
    }
//----------------------------------------------------
  printf("enter values for 2st array:");
    for (int i = 0; i < len1; i++)
    {
        printf("enter number at index at %d : ",i+1 );
        scanf("%d", &arr2[i]);
    }
    printf("\n\nArray is ");
     for (int i = 0; i < len; i++)
    {
        printf("[ %d ],", arr2[i]);
        
    }
printf("sum is ");
if(n1>n2){
int sum[n1];
for (int i = 0; i < n1; i++)
{
    sum[i]= arr1[i]+arr2[i];
    for (int i = 0; i < n2; i++)
{
    printf("%d",sum[i]);
}
}

}else{
    int sum[n2];
for (int i = 0; i < n2; i++)
{
    sum[i]= arr1[i]+arr2[i];
}
for (int i = 0; i < n2; i++)
{
    printf(" [%d], ",sum[i]);
}
}


}