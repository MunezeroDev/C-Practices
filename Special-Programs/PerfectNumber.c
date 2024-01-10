// write a program to check if a number is a perfect number or not 
// it also print outs the divisors 
#include <stdio.h>

int main (){
    int number, counter = 0;

    printf("Enter the number: \n");
    scanf("%d",&number); 

    int n = number / 2;    //28
    //1, 2, 4, 7, and 14.
    if(n>0){
        for(int i = 1; i <= n; i++){ 
            if(number % i == 0){ 
                counter = counter + i;
                printf("%d\n",counter); 
            }
        }

        if(counter == number){
            printf("%d is A perfect number\n",number); 
        }else {
            printf("%d is not a perfect number\n",number);
        }

    }else{
        printf("%d is not a perfect number\n",number);
    }

    return 0;
}