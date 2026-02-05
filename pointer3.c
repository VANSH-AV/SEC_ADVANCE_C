#include <stdio.h>

void greet() {
    printf("Hello from the function!\n");
}

int main() {
    void (*ptr)() = greet;
    ptr();

    return 0;
}
