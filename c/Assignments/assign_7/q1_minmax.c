#include<stdio.h>
#include<limits.h>
void main(){
    int arr[7];
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
    int min  =INT_MAX;
    int max =INT_MIN;
    for (int i = 0; i < len; i++)
    {
        if(max<arr[i])
        max = arr[i];

        if (min>arr[i])
        min = arr[i];
        
    }
    printf("\nmax is %d ", max);
    printf("\nmin is %d ", min);

    

    
    
}