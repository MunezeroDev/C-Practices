/*
Write a program to draw the matrix below (10*6) using
For Loop
**********
**********
**********
**********
**********
**********
*/

#include <stdio.h>

int main (){
    printf("====10 By 6 Matrix===\n");
    
    int i,j;

    for(i=1; i<=6; i++){
        for(j=1; j<=10; j++){
           printf("*"); 
        }
        printf("\n");
    }

    return 0;
}