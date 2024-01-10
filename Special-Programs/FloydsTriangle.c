// write a program to write floyd's triangle to n rows 

#include <stdio.h>

int main (){
    int n,row,col,i,j;

    printf("Enter Number of rows:\n"); 
    scanf("%d",&row);
    n=1;
    col=1;

    for(i=1;i<=row;i++){
        for(j=1; j<=col; j++){
            printf("%d ",n);
            n++;
        }
        col++; 
        j=1;
        printf("\n");
    }


    return 0;
}