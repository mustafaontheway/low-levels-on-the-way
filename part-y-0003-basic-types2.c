#include <stdio.h>

int main() {

    // float 4 byte, double 8 byte

    float pi1 = 22.0f / 7.0f;

    double pi2 = 22.0 / 7.0;

    //long double pi3 = 22.0L / 7.0L;

    printf("Float pi: %.8f\n", pi1);

    printf("Float pi: %.2f\n", pi1);

    printf("Double pi: %.9lf\n", pi2);

    printf("Double pi: %.6f\n", pi2);

    return 0;
}

// Float pi: 3.14285707
// Float pi: 3.14
// Double pi: 3.142857143
// Double pi: 3.142857

// gcc main.c -o program ; .\program.exe
