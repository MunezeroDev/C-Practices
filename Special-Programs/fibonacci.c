#include <stdio.h>

int main (){

    int limit,fib,n,i,a,b,c;
    printf("Enter Number of Fibonnaci Sequence:\n"); 
    scanf("%d",&limit);
    n=1;

    while(n<=limit){
        for(i=0;n<=2;n++){
            printf("%d,",i);
            i++;
        }

        a=0,b=1;

        while(n<=limit){
            fib= a+b; //1,2
            printf("%d,",fib);
            a=b; // 1
            b=fib; // 1
            n++;//4
        }
        printf("\n");
    }
    return 0;
}