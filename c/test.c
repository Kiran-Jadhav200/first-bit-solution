#include <stdio.h>
int armstrong(int);
void main()
{
  int range = 0;
  printf("Enter the range: ");
  scanf("%d", &range);
  for (int nums = 0; nums < range; nums++)
  {
    if (armstrong(nums))
    {
      printf(" %d ", nums);
    }
  }
}

int armstrong(int num)
{ // 4964
  int temp, sum = 0;
  int cnt = 0;
  temp = num;
  while (temp != 0) // 0
  {
    cnt++;      // 4
    temp /= 10; // 0
  }

  temp = num; // 464
  while (temp != 0)
  {
    int rem = temp % 10; // 4
    int ans = 1;
    for (int i = 0; i < cnt; i++)
    {
      ans *= rem;
    }
    sum += ans;
    temp /= 10;
  }
  return sum == num; // 1 //0
}