/*
Logic Example 
7  -> 0111
7  -> 0111
14 -> 1110

iteration1
sum - XOR 
  0111
  0111
  0000 =sum 
carry 
  0111
  0111
  0111 -> 1110 = carry

iteration2 
sum - XOR
  0000
  1110
  1110 = sum (14)
carry 
  0000
  1110
  0000 = sum 

*/

#include <stdio.h>

int main (){
    int a, b, sum,carry;

    printf("Enter First number: \n");
    scanf("%d",&a); //1  , 0
    printf("Enter Second number: \n");
    scanf("%d",&b); //2 , 3

    while(b!=0){
        sum = a ^ b ;
        carry = (a&b)<<1; 
        a = sum ; 
        b = carry;
    }

    printf("sum without using '+' operator of %d and %d : %d\n",a,b,sum);

    return 0;
}