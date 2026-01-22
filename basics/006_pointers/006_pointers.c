#include <stdio.h>
#include <stdlib.h>

/* Ownership is transferable, but only explicitly */
int *make_number(void) {
    int *p = malloc(sizeof(int));
    *p = 42;
    return p;   // Ownership transfered to caller...
}

/* Function 'a()' */
int *a(void) {
    return malloc(sizeof(int));
}

/* Function 'b()' */
void b (int *p) {
    printf("\nValue stored for [ z ] = [ %d ]", *p);
}

int main(void) {
    int *x = make_number();
    printf("\nValue stored for [ x ] = { %d }", *x);
    free(x);
    x = NULL;

    /* Below code causes a 'Segmentation Fault (core dump) */
//    int *y = a();
//    printf("\nValue stored for [ y ] = { %d }", *x);   // Dereferencing NULL...
//    free(y);
//    y = NULL;

    /* Calling function 'a()' */
    int *y = a();
    printf("\nValue stored for [ y ] = {%d}", *y);
    free(y);
    y = NULL;

    /* Calling function 'b()' */
    int v = 222;
    b(&v);
}
