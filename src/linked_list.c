#include <stdlib.h>
#include <stdio.h>

struct node {
    int val;
    struct node *next;
};

int main() {
    struct node *curr, *head;
    head = NULL;

    for (int i = 1; i < 10; i++) {
        curr = (struct node *) malloc(sizeof(struct node));
        curr->val = i;
        curr->next = head;
        head = curr;
    }

    curr = head;

    while (curr) {
        printf("%d\n", curr->val);
        curr = curr->next;
    }

    return 0;
}
