#include <stdio.h>
#include "secondfile.h"
void main(void)
{
    int i, j;
    printf("Hello World!\n);
    i = 1;
    j=i+2;
    printf("i=%d, j=%d \n", i, j);
    i= calculate (i, j);
    printf("calculated result is %d \n", i);
}
