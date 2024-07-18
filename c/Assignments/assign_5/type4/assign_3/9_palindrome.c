#include <stdio.h>

int palindrome(int);
void main() {
    
 if (palindrome(232)) {
        printf("it is a palindrome.\n");
    } else {
        printf("it is not a palindrome.\n");
    }
   
}
int palindrome(int num){
   
    
     int reversedNum = 0;
    int originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
return originalNum == reversedNum?1:0;

}