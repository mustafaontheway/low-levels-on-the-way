#include <stdio.h>

int main() {

    int counter = 0;

    for (int i = 1; i <= 10; i++) {

        counter += i;

        printf("Counter value: %d\n", counter);
    }

    return 0;
}
