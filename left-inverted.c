/*
Write a program to draw A left triangle upside down matrix below (8*8) 
using a For Loop

********
*******
******
*****
****
***
**
*
*/

#include <stdio.h>

int main (){
    printf("====8 By 8 Left Inverted Triangle  Matrix===\n");
    
    int i,j,row,col;
    // given n , row = n , col = row-n 
    row =8; 
    col = row;//8

    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            printf("*");
        }
        col--;
        printf("\n");
    }
    return 0;
}