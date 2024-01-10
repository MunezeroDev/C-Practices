/*
Write a program to draw A Right triangle matrix below (8*8) 
using a For Loop
       *
      **
     ***
    ****
   *****
  ******
 *******
********
*/

#include <stdio.h>

int main (){
    printf("====8 By 8 Right Triangle Matrix===\n");
    
    int i,j,z,row,col,star;
    // given n , row = n , col = row-(n-1) 
    row = 8; 
    col = row-1;
    star = row -7;

    for(i=1; i<=8; i++){
        for(j=1; j<=col; j++){
            printf(" ");
        }
        for(z=1; z<=star; z++){
             printf("*");
        }

        star++;
        col--;
        printf("\n");
    }
    return 0;
}