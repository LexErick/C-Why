#include <stdio.h>
#include <stdlib.h>

int *make_number(void) {
    int *p = malloc(sizeof(int));
    *p = 42;
    return p;
}

int *c(int *p) {
    return p;   // No ownership change...
}

int main(void) {
    int *x = make_number();

    int *y = c(x);   // Alias, NOT a new allocation...

    printf("x = %d\n", *x);
    printf("y = %d\n", *y);

    free(x);   // Free ONCE...
    x = NULL;
    y = NULL;   // Alias now dangling, but not freed...

    return 0;
}
