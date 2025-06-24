#include <stdio.h>
int func(int a, int sum){
    sum=sum+a;
    if (a==0){
        return sum;}
    func(a-1,sum);
}

void main(){
    int a=5, sum=0, c;
    c=func(a, sum);
    printf("%d", c);
}
