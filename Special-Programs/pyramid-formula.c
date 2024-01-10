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
    int i,j,row,col,n;

    printf(" Enter Number of Rows \n");
    scanf("%d",&row);//8
    col = (2*row)-1;//15
    
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            if(j >= row-(i-1) && j <= row+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}