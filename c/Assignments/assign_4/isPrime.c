#include<stdio.h>
void main(){
    int n,cnt;
    printf("Enter the range: ");
    scanf("%d", &n);//10
    printf("Prime numbers are: ");
for(int i =1; i<=n; i++ ){//i=1 && 1<7
    cnt =0;
    for (int j = 2; j <=i/2;j++) //j=0
    {
        if(i%j==0){ //
            cnt++;
            break;
        }
    }
    if(cnt==0 && i!=1)
    printf("%d ",i);
    
}
    
}