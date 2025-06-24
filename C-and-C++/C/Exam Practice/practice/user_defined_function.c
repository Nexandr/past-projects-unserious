#include <stdio.h>

int main()

{
    //QUESTION 3
    //Write a program to output the value of a/b-c
    float a,b,c, res;
    printf("Input values of a, b and c separated by commas: ");
    scanf("%f, %f, %f", &a, &b, &c);

    if (b==c)
    {
        printf("DIVISION BY ZERO");
    }
    else
    {
        float func(float x,float y,float z) //Defining function of type "float", using parameters x, y, z of type "float"
        {
            float result; //declaring variable result of float type
            result=(x/(y-z)); //operation of function
            return result; //return the output from function
        }
        res=func(a, b, c);
        printf("The result of your values are: %.3f", res);
        return 0;
    }
}
