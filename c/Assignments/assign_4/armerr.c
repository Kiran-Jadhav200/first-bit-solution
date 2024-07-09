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
     cnt++;
     ans=0;
    for (int i = 0; i < cnt; i++)
    {
      ans = rem*rem;
    }
    sum+=ans;
    }
    if(i == sum) printf("%d is armstrong" );

  }
  

}
