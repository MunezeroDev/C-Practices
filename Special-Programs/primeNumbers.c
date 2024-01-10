// Write a program to check if a number is a prime number 
// prime number (p) = divisible by itself or 1

#include <stdio.h>

int main (){
    printf("Enter a number: \n");
    int number, origalN,  i, count;
    scanf("%d",&number); //9
    origalN =  number; // 9

    for(i=2; i<origalN; i++ ){
        if(origalN % i == 0){
           count = 1;
        }
    }

    if( count == 1 || number<= 1){
        printf("%d  is NOT a prime Number! \n", number);
    }else{
        printf("%d  is A prime Number! \n", number);
    }
    return 0;
}








