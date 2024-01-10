/*
Write a program to calculate factor of user input number
ie : 3*2*1 = 6; 
*/

#include <stdio.h>

int main (){
    printf("Enter a number: \n");
    int i, number, factorial = 1, result = 0;

    scanf("%d",&number); //3
    int factor = number; // 3 

    while(factor != 0){
       factorial = factorial * factor; // 1*3, 3*2, 3*2*1
       factor--; // 2,1,
    }

    printf("%d ! = %d \n", number , factorial);

    return 0;
}