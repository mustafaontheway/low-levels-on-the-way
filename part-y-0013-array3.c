#include <stdio.h>

int main() {

    int years[4];

    years[2] = 1989;
    years[0] = 1974;
    years[1] = 2000;
    years[3] = 2010;

    for (int i = 0; i < 4; i++) {

        printf("Year: %d\n", years[i]);
    }

    return 0;
}

// Year: 1974
// Year: 2000
// Year: 1989
// Year: 2010

// gcc main.c -o program ; .\program.exe
