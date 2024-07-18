#include <stdio.h>
int firstAndList(int);
int main() {
printf("sum is %d ", firstAndList(325485));
}
int firstAndList(int number)
{
        int firstDigit, lastDigit, sum;

     printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
      
        firstDigit /= 10;
       
    }

    // Extract the last digit
    lastDigit = number % 10;

    return firstDigit + lastDigit;
}