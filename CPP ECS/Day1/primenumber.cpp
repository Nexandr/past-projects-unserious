#include <iostream>
using namespace std;
int main(){
    int input, cnt=0;
    cout<<"Enter your number:"<<endl;
    cin>>input;
    for(int i=1; i<=input; i++)
        if (input%i==0)
            cnt++;
    if (cnt==2)
        cout<<"The following number is prime.";
    else
        cout<<"The number is not prime.";
}
