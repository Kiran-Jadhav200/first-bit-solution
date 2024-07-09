#include<stdio.h>
void main(){

  int num = 0,temp, sum, cnt=0, rem =0 ,ans;
  printf("Enter range: ");
  scanf("%d", &num);
  for (int i = 1; i <=num; i++)
  {
    temp = i;
    sum =0;
    
    while (temp!=0)
    {
     rem = temp%10;
    sum+=rem*rem*rem;
    temp/=10;
    }
    if(i == sum) printf("\n%d is armstrong" );
    
  }
  

}
