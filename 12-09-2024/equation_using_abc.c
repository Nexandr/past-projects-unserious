#include <stdio.h>

int main()
{
    //QUESTION 3
    //Write a program to output the value of a/b-c
    float a,b,c, res;
    printf("Input values of a, b and c separated by commas: ");
    scanf("%f, %f, %f", &a, &b, &c);
    float func(int x,int y,int z)
    {
        float result;
        result=(x/(y-z));
        return result;
    }
    res=func(a, b, c);
    printf("The result of your values are: %f\:", res);
    return 0;
}
