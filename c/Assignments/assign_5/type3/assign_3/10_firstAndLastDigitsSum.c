#include <stdio.h>
void firstAndList();
int main() {
firstAndList();
}
void firstAndList()
{
        int number, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
      
        firstDigit /= 10;
       
    }

    // Extract the last digit
    lastDigit = number % 10;

    // Calculate the sum
    sum = firstDigit + lastDigit;

    

    return 0;
}