#include <stdio.h>

int main() {

    int years[] = {2000, 1987, 1965};

    printf("He was born in %d.\n", years[2]); 

    years[2] = 1966;

    printf("Updated: He was born in %d.", years[2]); 

    return 0;
}

// He was born in 1965.
// Updated: He was born in 1966.

// gcc main.c -o program ; .\program.exe
