#include <stdio.h>
int main(){
    FILE *data = fopen("DATA", "w");
    int datareq[10]={12, 45, 87, 23, 11, 34, 42, 03, 114, 43};
    for(int i=0; i<10; i++){
    fprintf(data, "%d\n", datareq[i]);}
    return 0;
}
