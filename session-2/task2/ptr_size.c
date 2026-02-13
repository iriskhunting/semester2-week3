
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));

    double *testDblePtr;

    printf("Double pointer size is %ld bytes\n",sizeof(testDblePtr));

    return 0;
}
