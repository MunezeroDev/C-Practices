/*
Write a program to draw A Pyramid matrix below (9 rows) 
using a For Loop
        *  
       *** 
      ***** 
     ******* 
    *********
   ***********
  *************
 ***************
*****************
*/

#include <stdio.h>

int main (){
    int i,j,z,row,col,space;

    printf(" Enter Number of Rows \n");
    scanf("%d",&row);//8
    col = (row*2)-1; //17
    space = 0 ;
     
    for(i=1; i<=row; i++){
        for(z=1; z<=space; z++){
             printf(" ");
        }

        for(j=1; j<=col; j++){
             printf("*");
        }

        col = col - 2 ;
        space++;
        // -2=col 
        
        printf("\n");
    }
    return 0;
}