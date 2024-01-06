// Write a program to check if a number is a prime number 
// prime number (p) = divisible by itself or 1
// This is a faster algorithm

#include <stdio.h>
#include <math.h>

int main (){
    printf("Enter a number: \n");
    int number, squareN, i;
    scanf("%d",&number); 

    if(number <= 1){
        printf("%d  is NOT a prime Number! \n", number);
        return 0 ;
    }

    squareN = floor(sqrt(number)); 
    // ceil () will limit iteration ie incase of 2 => ceil(sqrt(2))=2 instead of 1; 

    for(i = 2; i <= squareN; i++){
        if(number % i == 0){
          printf("%d  is NOT a prime Number! \n", number); 
          return 0; 
        }
    }

    printf("%d  is A prime Number! \n", number);
    return 0;
}


/*
if a number has a divisor larger than its square root, 
it implies the existence of a smaller divisor, and you don't need to check both. 
Therefore, by checking divisors up to the square root, 
you cover all possible divisors without redundant checks, 
making the primality test more efficient.
*/