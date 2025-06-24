#include <stdio.h>
void sort(int array[], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-1; j++){
            if (array[i]<array[j]){
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
int main(){
    //Input
    int array1[5]={3, 11, 0, 9, 10};
    int array2[5]={12, 4, 7, 11, 1};
    //Size calc
    int n=sizeof(array1)/sizeof(array1[0]), m=sizeof(array2)/sizeof(array2[0]);
    int sum_array[n+m];

    //Initializing sum_array=0
    for (int i=0; i<n+m; i++){
        sum_array[i]=0;
    }

    //copying array 1
    for (int i=0; i<n; i++){
            sum_array[i]=array1[i];
    }

    //copying array 2
    for (int i=n; i<n+m; i++){
            sum_array[i]=array2[i-n];
    }
    //sort
    sort(sum_array, n+m);

    //print
    for (int i=0; i<n+m; i++){
        printf("%d ", sum_array[i]);
    }
    return 0;
}
