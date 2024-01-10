/*
Write a program to draw A left triangle matrix below (7*7) 
using a For Loop

*
**
***
****
*****
******
*******
*/

#include <stdio.h>

int main (){
    printf("====7 By 7 Left Triangle Matrix===\n");
    
    int i,j,z,row,col;
    // given n , row = n , col = row-n 
    row =7; 
    col = row-6;

    for(i=1; i<=7; i++){
        for(j=1; j<=col; j++){
            printf("*");
        }
        col++;
        printf("\n");
    }
    return 0;
}

//new line is executed only if condition is false
//i<=7 is the stop condition for col++