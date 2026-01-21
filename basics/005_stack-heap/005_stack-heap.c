#include <stdio.h>
#include <stdlib.h>

//void f(void) {
//  int x = 42;
//  printf("%d\n", x);
//}

//int main(void) {
//  f();
//  return 0;
//}

/* If Below Function Stand Alonw It Will Not Work */
int *good(void) {

    int *p = malloc(sizeof(int));
    *p  = 84;

    return p;
}

int main (void) {

    int *x = good();

    printf("Value: %d\n", *x);

    free(x);
    x = NULL;

    return 0;
}
