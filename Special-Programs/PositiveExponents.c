// write a program to count the powers of an interger 

#include <stdio.h>

int main (){
    int exponent ,base, expo;
    int  powerInt = 1;
    double powerDouble = 1.0; 

    printf("Enter Base: ");
    scanf("%d", &base); 

    printf("Enter Exponent: ");
    scanf("%d", &exponent); 

    expo = exponent;

    if(exponent > 0){
        for(int i = 1; i<=expo; i++){
            powerInt = powerInt * base; 
            // powerInt *= base;
        }
        printf("%d \n",powerInt); 
    }
}
