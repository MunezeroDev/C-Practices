// write a program to write floyd's triangle to n rows 

#include <stdio.h>

int main (){
    int n,row,i,j;

    printf("Enter Number of rows:\n"); 
    scanf("%d",&row);
    n=1;

    for(i=1;i<=row;i++){
        for(j=1; j<=i; j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }


    return 0;
}

//NB: Notice when j<= i evaluates to false and we terminate inner loop 
//  :After each outer loop iteration, j is reset back to 1 at the start of the inner loop.