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
    scanf("%d",&row);
    
    col=  1;
    space = row -1; 

    for(i=1; i<=row; i++){
        for(z=1; z<=space; z++){
             printf(" ");
        }

        for(j=1; j<=col; j++){
            printf("*");
        }
        
        col+= 2;
        space--;
    
        printf("\n");
    }
    return 0;
}