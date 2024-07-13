#include <stdio.h>
void main()
{

  int range, rem, temp, sum;

  printf("Enter Range: ");
  scanf("%d", &range);

  for (int num = 1; num < range; num++)
  {
    int cnt = 0;
    temp = num; // 153
    sum = 0;
    rem = 0;
//as=1
    

    while (temp > 0) // 153
    {
      cnt++;      // count got 3
      temp /= 10; // 0 temp =0;
    }
    //  printf("cnt %d", cnt);
    temp = num;
    while (temp != 0)
    {
      rem = temp % 10;
      int ans = 1;
      for (int i = 0; i < cnt; i++)
      {
        ans = ans * rem; // 1534   4* 4*4* =64 +( 27)
        //  printf("\nfor num %d ans is : %d" ,num,ans);
      }
      sum += ans;
      temp /= 10;
      // printf("\nsum %d", sum);
    }
    // printf("\nfor num %d sum is %d", num, sum);
    if (sum == num)
      printf(" %d ", num);
  }
}
