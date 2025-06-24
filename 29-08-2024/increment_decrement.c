#include <stdio.h>5

int main()
{
    printf("Enter the number you want to operate on:\n");
    int inp, inc, dec;
    scanf("%d", &inp);
    inc=++inp; //inp=6 a+++a
    inp=inp-1;//inp=5 ++a+a
    dec=--inp;//inp=4
    printf("Your number incremented: %d \nYour number decremented: %d\n", inc,dec);
    int a,b;
    a=inp+++inp; // inp=4, 4+(4+1) [a=5 now]
    b=++inp+inp; // a=(5+1); 6+6=12
    printf("Output of 1st expression: %d\nOutput of 2nd expression: %d\n", a,b);
    return 0;
}
