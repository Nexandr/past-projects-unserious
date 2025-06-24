#include <stdio.h>
int main()
{
    while(1)
    {
        float TickCost, OrigCost, NewCost, Difference;
        printf("Enter cost of your movie ticket:\n");
        scanf("%f", &TickCost);

        //Calculating Original Cost
        OrigCost = TickCost + TickCost*(15.0/100);

        //Creating Function
        float GST(float cost, float exception)
            {
                float fincost, GSTP;
                GSTP = 28 - exception;
                fincost = cost + cost*(GSTP/100);
                return fincost;
            }
        //Creating two cases using if statements.
        if (TickCost<100 && TickCost>=0)
        {
            char TickClass;
            printf("Enter your class: (F for First, S for Second, T for Third)\n");
            scanf(" %c", &TickClass);

            switch (TickClass)
            {
                case ('F'):
                case ('f'):
                    {
                    float result;
                    result = GST(TickCost, 0);
                    printf("\nYour cost after GST application is: %.2f\n\n", result);
                    Difference=result-OrigCost;
                    printf("The amount of excess money you are paying is: %.2f\n", Difference);
                    break;
                    }
                case 'S':
                case ('s'):
                    {
                    float result;
                    result = GST(TickCost, 5);
                    printf("\nYour cost after GST application is: %.2f\n\n", result);
                    Difference=result-OrigCost;
                    printf("The amount of excess money you are paying is: %.2f\n", Difference);
                    break;
                    }
                case 'T':
                case 't':
                    {
                    float result;
                    result = GST(TickCost, 10);
                    printf("\nYour cost after GST application is: %.2f\n\n", result);
                    Difference=result-OrigCost;
                    printf("The amount of excess money you are paying is: %.2f\n", Difference);
                    break;
                    }
                default:
                    printf("Please enter either F, S, or T.\n");
                    break;
            }
        }
        else if (TickCost>=100)
        {
            float result;
            result = GST(TickCost, 0);
            printf("\nYour cost after GST application is: %.2f\n\n", result);
            Difference=result-OrigCost;
            printf("The amount of excess money you are paying is: %.2f\n", Difference);
        }
        else if (TickCost<0)
        {
            printf("Exiting the loop...\n");
            break;
        }
        printf("----------------------------------------------------\n");
    }
}
