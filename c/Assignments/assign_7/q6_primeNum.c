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
    printf("\n\nArray is ");
     for (int i = 0; i < len; i++)
    {
        printf("[ %d ],", arr[i]);
        
    }
printf("Prime is ");
for(int i =0; i<len; i++ ){//i=1 && 1<7
   int cnt =0;
    for (int j = 2; j <=i/2;j++) //j=0
    {
        if(arr[i]%j==0){ //
            cnt++;
            break;
        }
    }
    if(cnt==0 && i!=1)
    printf("\n%d ",arr[i]);
    
}

}