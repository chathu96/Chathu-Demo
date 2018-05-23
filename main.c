#include <stdio.h>

int main() {

    double arrayC[10];

    arrayC[0] = 35.2;
    arrayC[1] = 155.2;
    arrayC[2] = 63.10;
    arrayC[3] = 205.2;
    arrayC[4] = 405.2;
    arrayC[5] = 3.5;
    arrayC[6] = 366.6;
    arrayC[7] = 85.66;
    arrayC[8] = 885.5;
    arrayC[9] = 995.12;

    for (int i = 0; i < 10; ++i) {

        printf("%f " ,arrayC[i]);

    }
}