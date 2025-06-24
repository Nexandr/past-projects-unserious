#include <stdio.h>
//Prime numbers before given numbers.
int findprime(int num){
    int cnt=0;
    for(int i=1; i<=num; i++)
        if (num%i==0)
            cnt++;
    if (cnt==2)
        return 1;
    else
        return 0;
}
int main(){
    int input, prime;
    printf("Input your number here:\n");
    scanf("%d", &input);
    for (int j=2; j<=input; j++){
        if (findprime(j)==1){
            prime=j;
            printf("%d ", prime);}
    }
    printf("are the primes before your entered number.\n");
    return 0;}
