#include<stdio.h>
//Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations.
void main(){
    int choice;
    printf("what do you want to do\n1.Even odd\n2.Basic salary: ");
    scanf("%d", &choice);
    

    
    if(choice == 1){
        printf("Your have choice even odd\nenter number you want to find is even or odd: ");
        int odd;
        scanf("%d", &odd);
        odd%2==0?printf("is even number"):printf("is odd number");
    }
    else if (choice ==2)
    {
        printf("You choose salary \nenter sal: ");
    int basic ;
    scanf("%d",&basic);
    float da,ta,hra, sal;
    if(basic <= 5000){
        da = basic* 0.15;
        ta = basic * 0.20;
        hra = basic * 0.25;
        sal = basic + (da+ta+hra);
    }
    else{
        da = basic* 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
        sal = basic + (da+ta+hra);
        
    }
    printf("your sal is %.2f",sal);
    }
    
}