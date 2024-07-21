#include <stdio.h>
void firstAndList(int*);
int main() {
    int num = 15545;
firstAndList(&num);
}
void firstAndList(int *number)
{
        int firstDigit, lastDigit, sum;

    // Extract the first digit
    firstDigit = *number;
    while (firstDigit >= 10) {
      
        firstDigit /= 10;
       
    }

    // Extract the last digit
    lastDigit = *number % 10;

    // Calculate the sum
    sum = firstDigit + lastDigit;
printf("the firsrt and last digit sum is %d",sum);
}