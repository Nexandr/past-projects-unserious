#include <stdio.h>
int main(){
    FILE *data = fopen("DATA","r");
    FILE *odd = fopen("ODD", "w");
    FILE *even = fopen("EVEN", "w");

    int num;
    while (fscanf(data, "%d", &num)!=EOF){
            if (num%2){
                fprintf(odd, "%d ", num);
            }
            else{
                fprintf(even, "%d ", num);
            }
    }
    fclose (data);
    fclose (odd);
    fclose (even);
    return 0;
}
