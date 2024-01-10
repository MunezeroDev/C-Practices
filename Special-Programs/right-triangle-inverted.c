/*
Write a program to draw A Right triangle matrix below (8*8) 
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
    printf("====8 By 8 Inverted Right Triangle Matrix===\n");
    
    int i,j,z,row,col,space;
    // given n , row = n , col = row-(n-1) 
    row = 8; 
    col = row;
    space = 0;

    for(i=1; i<=8; i++){
        for(z=1; z<=space; z++){
             printf(" ");
        }

        for(j=1; j<=col; j++){
            printf("*");
        }
        
        space++;
        col--;
        printf("\n");
    }
    return 0;
}