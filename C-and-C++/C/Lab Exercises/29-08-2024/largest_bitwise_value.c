#include <stdio.h>

int main()
{
    unsigned var=0;
    var = ~var;
    var = var>>1;
    /* Unsigned Datatype can never be negative
    unsigned var=0 assigns value 0 to var which is unsigned
    var= ~var inverts the bits of var [00000... to 1111...]
    since the value is negative due to overflow, one right shift can to make it positive*/
    printf("Maximum value of int is: %u\n", var);
    return 0;
}

