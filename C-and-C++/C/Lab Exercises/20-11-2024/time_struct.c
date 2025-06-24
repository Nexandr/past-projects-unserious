#include <stdio.h>

typedef struct {
    int hour;
    int minute;
    int second;
} time_struct;

int main() {
    time_struct time = {16, 40, 51};
    printf("Time: %02d:%02d:%02d\n", time.hour, time.minute, time.second);
    return 0;
}
