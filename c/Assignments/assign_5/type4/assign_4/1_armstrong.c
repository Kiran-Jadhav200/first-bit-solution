#include<stdio.h>
#include<math.h>
int armstrong(int);
void main(){
  int range =10000;
  // printf("Enter Number: ");
  // scanf("%d", &range);
  for (int i = 1; i < range; i++)
  {
   
   if(armstrong(i)==i){
    printf(" %d ",i );
   }
     // printf(" %d ", armstrong(i));
  }

}
int armstrong(int num ){ //153
 // printf("\n%d",num);
  int rem =0,temp, sum=0;
  int cnt =0; temp = num;  //temp =153
  while (temp!=0)  //153  | 15| 3
  {
    cnt++; // 1 |2 | 3  cnt =3
    temp/=10; //15 | 5 |0
  }
  temp = num; // 0=153
  while (temp!=0)//153  | 15| 3 
  {
    rem = temp%10; //3 | 5 | 1
    int cube=1;
    for(int k=1;k<=cnt;k++)
    {
      cube = cube*rem;
    }
    sum = sum+ cube; // 27 | 152| 1
    temp/=10;
  }
  return sum;
  
}
