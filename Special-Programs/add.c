// write a program that adds 2 numbers without using +
// x++, y-- 

#include <stdio.h>

int main (){
    int x, y;

    printf("Enter First number: \n");
    scanf("%d",&x); //1  , 0
    printf("Enter Second number: \n");
    scanf("%d",&y); //2 , 3

    for(int i = 0; x > 0; x--){
        y++;
    }
    printf("sum without using '+' operator : %d\n",y);

    return 0;
}