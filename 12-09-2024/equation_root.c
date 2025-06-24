#include <stdio.h>
#include <math.h>

int main()
{
    while (1>0)
    {
        float a, b, c;
        printf("-------------------------------------------------------------------------------\n");
        printf("This is a calculator to find roots of a quadratic equation ax^2 + bx + c = 0\n");
        printf("-------------------------------------------------------------------------------\n");
        printf("Enter value of a, b, and c:\n");
        scanf("%f %f %f", &a, &b, &c);
        printf("Your equation is: %.0fx^2 + %.0fx + %.0f = 0\n", a, b, c);
        float discrim, root1, root2, real, imag;
        discrim = b*b - 4*a*c;
        if (discrim>0)
        {
            printf("Roots are real and distinct:\n");
            root1 = (-b + sqrt(discrim))/(2*a);
            root2 = (-b - sqrt(discrim))/(2*a);
            printf("Your roots are: %.1f and %.1f\n", root1, root2);
        }
        if (discrim==0)
        {
            printf("Roots are real and equal:\n");
            root1 = (-b + sqrt(discrim))/(2*a);
            printf("Your root is: %.1f\n", root1);
        }
        if (discrim<0)
        {
            printf("Roots are complex:\n");
            real=(-b)/(2*a);
            imag=(sqrt(-discrim))/(2*a);
            printf("Your roots are: %.2f+i%.2f and %.2f-i%.2f\n", real, imag, real, imag);
        }
    }
    return 0;
}
