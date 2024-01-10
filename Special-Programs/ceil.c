// Ce

#include <stdio.h>
#include <math.h>

int main (){
    printf("Enter a number: \n");
    int number, ceilN, floorN;
    scanf("%d",&number); 

    ceilN = ceil(sqrt(number));
        printf("%d \n", ceilN);
        
    floorN = floor(sqrt(number));
        printf("%d \n", floorN); 
    return 0;
}
/*
ceil() function : from Ceiling 
     rounds input number and return (rounds upward)
     the smallest integer that is greater than or equal to the input number.
*/



// gcc primeNumbers.c -o prime -lm







