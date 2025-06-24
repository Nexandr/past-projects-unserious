#include <iostream>
using namespace std;

bool findprime(int num){
    int cnt=0;
    for(int i=1; i<=num; i++)
        if (num%i==0)
            cnt++;
    if (cnt==2)
        return true;
    else
        return false;
}
int main(){
    int input, prime;
    cout<<"Input your number here:"<<endl;
    cin>>input;
    for (int j=2; j<=input; j++){
        if (findprime(j))
            prime=j;
    }
    cout<<prime<<" is the prime before your entered number."<<endl;
}
