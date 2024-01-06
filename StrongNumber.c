/*
Write a program to check whether a number is a strong Number or not
*/

#include <stdio.h>

int main () {
    int number, remainder , factorial=1, result=0, factor;

    printf("Enter the number: \n");
    scanf("%d",&number); 
    int value = number; // 145

    while(value != 0){
        remainder = value % 10;
        value = value / 10;
        factor = remainder;

        while(factor != 0){
            factorial = factorial * factor;
            factor--;
        }
        result = result + factorial;
        factorial = 1; 
    }
    // printf("%d\n", result);
    
    if(number == result){
        printf("%d is a Strong Number\n",number);
    }else {
        printf("%d is NOT a Strong Number\n" ,number);
    }
    return 0; 
}