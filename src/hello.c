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
    
    printf("while loop:\n");
    int j = 0;
    
    while (j < 5) {
        printf("while: %d\n", j++);
    }
}

int main() {
    hello();
    printf("-----------------\n");
    printf("Div 95 / 31: %.10f\n", div(95, 31));
    printf("-----------------\n");
    loops();
    
    return 0;
}