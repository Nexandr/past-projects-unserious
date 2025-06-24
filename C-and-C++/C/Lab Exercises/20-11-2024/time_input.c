#include <stdio.h>

typedef struct {
    int hour;
    int minute;
    int second;
} time_struct;
//
void inputTime(time_struct *t) { //time_struct *t indicates that arguement must be pointer of time_struct type
    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &t->hour, &t->minute, &t->second); //In the memory address off t, pass hour, minute and second
}

int main() {
    time_struct t; //time struct t is created
    inputTime(&t); //memory address of t is sent to inputTime
    printf("Time: %02d:%02d:%02d\n", t.hour, t.minute, t.second); //print hour, minute and second
    return 0;
}
