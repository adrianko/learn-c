#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hello() {
    printf("Hello, world\n");
}

double divide(int a, int b) {
    return a / (double) b;
}

void functions() {
    printf("Div 95 / 31: %.10f\n", divide(95, 31));
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
    printf("Enter 7 chars (no spaces): ");
    scanf("%s", chars);
    printf("%s\n", chars);
}

void add(int *x, int add) {
    (*x) = (*x) + add;
}

void pointers() {
    int x = 4;
    int *px = &x;
    printf("%d\n", *px);
    add(px, 5);
    printf("%d\n", *px);
}

typedef struct {
    int x;
    int y;
} Point;

void structures() {
    Point point1;
    point1.x = 5;
    point1.y = 4;
    printf("point1:\n");
    printf("x: %d, y: %d\n", point1.x, point1.y);
    printf("\n");
    Point *ppoint1 = &point1;
    printf("point1 pointer:\n");
    printf("x: %d, y: %d\n", ppoint1->x, ppoint1->y);
}

void strings() {
    char s1[8] = "Hello";
    char s2[8] = "World";
    printf("s1/s2: %d\n", strcmp(s1, s2));
}

void memory_allocator() {
    int numsToStore;
    printf("Number of ints to store: ");
    scanf("%d", &numsToStore);
    int *pMem = (int *) malloc(numsToStore * sizeof(int));

    if (pMem != NULL) {
        int i = 0;

        while (i < numsToStore) {
            printf("Enter an int or quit: ");
            
            if (scanf("%d", &pMem[i]) != 1) {
                break;
            }

            i++;
        }

        printf("You entered:\n");

        for (int j = 0; j < i; j++) {
            printf("%d: %d\n", j, pMem[j]);
        }

        printf("\n");
        free(pMem);
    }
}

void lb() {
    printf("-----------------\n");
}

int main() {
    hello();
    lb();
    functions();
    lb();
    loops();
    lb();
    conditions();
    lb();
    buffer_overflow();
    lb();
    pointers();
    lb();
    structures();
    lb();
    strings();
    lb();
    memory_allocator();

    return 0;
}
