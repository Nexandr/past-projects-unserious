#include <iostream>
using namespace std;
int main(){
    //Defining an array
    int arr[]={1, 2, 3, 4, 5};
    //Defining a pointer
    int* ptr=arr;
    int a=10;
    int* point;

    //Printing address of the array using array name
    cout<<"Memory address of arr: "<<&arr<<endl;

    //Printing address of array using pointer
    cout<<"Memory address of arr: "<<ptr<<endl;

    cout<<&arr<<endl<<&arr[1]<<endl<<&arr[2]<<endl;

    cout<<sizeof(point)<<endl<<sizeof(arr)/8+1;

    return 0;
}
