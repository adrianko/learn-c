#include <stdio.h>

void hello() {
    printf("Hello, world\n");
}

double div(int a, int b) {
    return a / (double) b;
}

void loops() {
    printf("for loop:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("for: %d\n", i);
    }
}

int main() {
    hello();
    printf("Div 95 / 31: %.10f\n", div(95, 31));
    loops();
    
    return 0;
}