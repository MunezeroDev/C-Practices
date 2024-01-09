// write a program to convert binary to decimal 

#include <stdio.h>
#include <math.h>

int main (){
    int exponent , decimal , binary , quotient , remainder; 
    printf("Enter binary number: ");
    scanf("%d", &binary); 

    quotient = binary ;
    decimal=0; 
    exponent = 0; 

    while(quotient != 0){
        remainder = quotient % 10; 
        quotient = quotient / 10 ; 

        //syntax: double pow(double base, double exponent); 
        decimal = decimal + (remainder * pow(2,exponent)) ; 
        exponent ++; 
    }
    
    printf("%d \n",decimal); 

    return 0;
}
