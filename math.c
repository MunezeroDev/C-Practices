
#include <stdio.h>
#include <math.h>

int main (){
    int num1, num2;
    double number;

    printf("Enter a number: \n");
    scanf("%lf",&number);

    num1 = ceil(number);
    printf("ceil of :  %d \n", num1);   

    num2 = floor(number);
    printf("floor of :  %d \n", num2);  

    return 0;
}