#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int z;
    char str[1000];
    a=atof(str);
    while(1>0)
    {
        printf("Enter your number\n");
        scanf("%s", &str);
        a=atof(str);
        z=(int)a;
        if(a>0)
        {
            printf("[%s] = %d\n", str, z);
        }
        if(a<0)
        {
            printf("[%s] = %d\n", str, z-1);
        }
        else if(a==0)
        {
            printf("[%s] = 0\n", str);
        }
        printf("--------------------------\n");
    }
    return 0;
}

