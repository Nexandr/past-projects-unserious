#include <stdio.h>

void main()
{
    {
        float var1=3.5;
        double var2=2.983;
        printf("%.2f %.3lf\n", var1, var2);
        double myfloat;
        printf("%d\n", sizeof(myfloat));
    }

    {
        printf("-----------PART 2-----------\n");
        int x=5;
        int y=2;
        int div=x/y;
        printf("%d\n", div);
        //Output is 2 because div is an int
        float div2=x/y;
        printf("%.2f\n", div2);
        //Output is 2.00 because x and y are ints
        div2=(float)x/y;
        printf("%.2f\n", div2);
        //Having (float) in brackets changes the datatype of x and y to float for the specific calculation
    }
    {
        printf("-----------PART 4-----------\n");
        float sqroot=sqrt(78);
        printf("%f\n", sqroot);
    }
    {
        printf("-----------PART 3-----------\n");
        char s[100];
        printf("Enter your string:\n");
        scanf("%s", &s);
        printf("Hello World!\n%s", s);
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        return 0;
    }

}
