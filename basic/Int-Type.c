// program to get  range of intergers depending on machine architecture 
#include <stdio.h>
#include <limits.h>
int main (){
    // note the values are constants
    int start = INT_MIN;
    int end = INT_MAX; 

    int min = 0; 
    int max = UINT_MAX;

    short int shortMin = SHRT_MIN;
    short int shortMax = SHRT_MAX; 

    short unsigned unShortMin = 0 ; 
    short unsigned unShortMax = USHRT_MAX;

    long int longMin = LONG_MIN; 
    long int longMax = LONG_MAX;

    long unsigned unLongMin = 0 ; 
    long unsigned unLongMax = ULONG_MAX; 

    long long longLongMin = LLONG_MIN; 
    long long longLongMax = LLONG_MAX;

    long long unsigned unlongLongMin = 0;
    long long unsigned unlongLongMax = ULLONG_MAX;

 
    //signed int
    printf("================================Signed Int================\n ");
    printf("Range is from %d to %d\n\n", start, end);

    //unsigned int
    printf("================================Un-Signed Int================\n ");
    printf("Range is from %u to %u\n\n", min, max);

    //short int
    printf("================================short Integer================\n");
    printf("Range is from %d to %d\n\n", shortMin, shortMax);

    // unsigned short int 
    printf("========================short Unsigned Integer================\n");
    printf("Range is from %u to %u\n\n", unShortMin, unShortMax);

    //long integers
    printf("========================Long signed Integer================\n");
    printf("Range is from %ld to %ld\n\n", longMin, longMax);

    // long unsigned intergers
    printf("========================Long Unsigned Integer================\n");
    printf("Range is from %lu to %lu\n\n", longMin, longMax);

    // long long integers 
    printf("========================Long Long  Integer================\n");
    printf("Range is from %lld to %lld\n\n",longLongMin , longLongMax);

    // unsigned long long integers 
    printf("========================Long Long  Unsigned Integer================\n");
    printf("Range is from %llu to %llu\n\n",unlongLongMin , unlongLongMax);

    return 0; 
} 

