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
       while(expo != 0){ // 3,2,1
        powerInt = powerInt * base ; 
        expo--; 
        printf("%d",powerInt); 
       }
    }else {
       while(expo != 0){ // -3,-2,-1
        powerDouble = powerDouble * (1.0/base); 
        expo++;
       }
        printf("%lf\n",powerDouble); 
    }
}
