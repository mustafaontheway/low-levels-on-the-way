#include <stdio.h>

int main() {

    double radius;

    printf("Type double radius value: ");

    scanf("%lf", &radius);

    double area = 3.14 * radius * radius;

    printf("Area is: %.4lf", area);

    return 0;  
}

// Type double radius value: 95.43
// Area is: 28595.6186

// gcc main.c -o program ; .\program.exe
