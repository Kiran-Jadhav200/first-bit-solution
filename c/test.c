#include<stdio.h>
void main(){
    int arr[5] = {10,20,30, 40, 50};
    int len = sizeof(arr)/sizeof(int);
    printf("len : %d\n", len);
    int i =0, j= len-1;
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        i++;
        j--;
        
    }
    for (int k = 0; k < len; k++)
    {
        printf(" %d, ",arr[k]);
    }
    
    

}