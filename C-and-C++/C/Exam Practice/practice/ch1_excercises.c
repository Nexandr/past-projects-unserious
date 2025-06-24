#include <stdio.h>

int main()
{
    //QUESTION 2
    //Write a program to output the following multiplication table: (5 table till 10)
    int a=0, prod;
    while(a<=10)
    {
        prod=5*a;
        printf("5 x %d = %d\n", a, prod);
        a=++a;
    }
    return 0;

}
