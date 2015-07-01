#include <stdio.h>

void hello() {
    printf("Hello, world\n");
}

double div(int a, int b) {
    return a / (double) b;
}

int main() {
    hello();
    printf("Div 95 / 31: %.10f\n", div(95, 31));
    
    return 0;
}