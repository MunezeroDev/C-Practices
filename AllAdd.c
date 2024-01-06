// write a program that adds 2 numbers without using +
// for both negatives and positives
// x++, y-- 

#include <stdio.h>

int main (){
    int x, y;

    printf("Enter First number: \n");
    scanf("%d",&x); //1  , 0
    printf("Enter Second number: \n");
    scanf("%d",&y); //2 , 3

    while(x>0){
        y++; 
        x--;
    }

    while(x<0){
       y--;
       x++;
    }

    printf("sum without using '+' operator : %d\n",y);

    return 0;
}