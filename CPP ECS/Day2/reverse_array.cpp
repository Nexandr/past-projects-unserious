#include <iostream>
using namespace std;
void rev_array(int inp_array[], int length){
    int temp;
    for (int i=0; i<length/2; i++){
        temp=inp_array[length-i-1];
        inp_array[length-i-1]=inp_array[i];
        inp_array[i]=temp;
        //or do swap(arr[i], arr[j])
    }
    for (int j=0; j<length; j++){
        if (j!=length-1)
        cout<<inp_array[j]<<" || ";
        else
        cout<<inp_array[j];
    }
    return;
}
int main(){
    int arr[]={'1', 50, 51, 52, 53, '6'};
    int len=sizeof(arr)/sizeof(arr[0]);
    rev_array(arr, len);
    return 0;
}
