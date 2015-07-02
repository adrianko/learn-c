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

void conditions() {
    printf("if/else stmt:\n");
    int f = 0;
    
    if (f == 1) {
        printf("f is 1\n");
    } else {
        printf("f: %d\n", f);
    }
    
    printf("switch/case stmt:\n");
    int g = 5;
    
    switch (g) {
        case 0:
            printf("g is 0\n");
            break;
        default:
            printf("g: %d\n", g);
            break;
    }
}

void buffer_overflow() {
    // Enter max 7 chars, 8th element is null character denoting end of array
    // Enter more than 7 characters results in buffer overflow "Abort trap: 6"
    char chars[8];
    printf("Enter 7 chars: ");
    scanf("%s", chars);
    printf("%s", chars);
}

int main() {
    hello();
    printf("-----------------\n");
    printf("Div 95 / 31: %.10f\n", div(95, 31));
    printf("-----------------\n");
    loops();
    printf("-----------------\n");
    conditions();
    printf("-----------------\n");
    buffer_overflow();
    return 0;
}