#include <stdio.h>

void palindrome(int*);
void main() {
    int nums = 78;
palindrome(&nums);
   
}
void palindrome(int *num){
   

     int reversedNum = 0;
    int originalNum = *num;

    while (*num != 0) {
        int remainder = *num % 10;
        reversedNum = reversedNum * 10 + remainder;
        *num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
}