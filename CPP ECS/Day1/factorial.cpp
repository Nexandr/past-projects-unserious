#include <iostream>
using namespace std;
int main(){
    int input, factorial=1;
    cout<<"Enter your number:"<<endl;
    cin>>input;
    for (int i=input; i>0; i--)
        factorial=factorial*i;
    cout<<factorial<<" is the factorial of "<<input;
}
