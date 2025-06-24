#include <iostream>
using namespace std;
//Call by Value
void cbv(int num){
    num++;
    cout<<num<<endl;
}
//Call by Reference
void cbr(int& num){
    num++;
    cout<<num<<endl;
}
int main(){
    int numb=5;
    cbv(numb);
    cout<<numb<<endl;
    cbr(numb);
    cout<<numb<<endl;
    return 0;
}
