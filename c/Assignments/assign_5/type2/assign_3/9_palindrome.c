#include <stdio.h>

void palindrome();
void main() {
    
palindrome();
   
}
void palindrome(){
    int num;
     printf("Enter a number: ");
    scanf("%d", &num);
     int reversedNum = 0;
    int originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
}