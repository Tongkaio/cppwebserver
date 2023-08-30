#include <stdio.h>

#define PI 3.14

int main() {
    int sum = PI + 10;
#ifdef DEBUG
    printf("define DEBUG\n");
#endif
    printf("hello\n");
    return 0;
}
