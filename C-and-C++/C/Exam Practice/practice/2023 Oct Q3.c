#include <stdio.h>
int main()
{
    char nits[] = {'N', 'I', 'T', 'S'};
    printf("Size of nits[] is %ld bytes \n", sizeof(nits));
    printf("and value of nits[2] = %d", nits[2]);
    return 0;
}
