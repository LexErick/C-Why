#include <stdio.h>
#include <stdlib.h>

/* Ownership is transferable, but only explicitly */
int *make_number(void) {
    int *p = malloc(sizeof(int));
    *p = 42;
    return p;   // Ownership transfered to caller...
}

/* Function 'a()' NOT INITIALIZED */
// int *a(void) {
//     return malloc(sizeof(int));
// }

/* Function 'a()' INITIALIZED */
int *a(void) {
    int *c = malloc(sizeof(int));
    *c = 1;
    return c;
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

/* Function 'c()' */
int *(int *p) {
	return p;
}

    /* Below code causes a 'Segmentation Fault (core dump) */
//    int *y = a();
//    printf("\nValue stored for [ y ] = { %d }", *x);   // Dereferencing NULL...
//    free(y);
//    y = NULL;

    /* Calling function 'a()' */
    int *y = a();
    printf("\nValue stored for [ y ] = [ %d ]", *y);
    free(y);
    y = NULL;

    /* Calling function 'b()' */
    int v = 222;
    b(&v);
    
    /* Calling function 'c()' */
    int *c = c(&c);
    printf("\nValue stored for [ c ] = [ %d ]", *c);
    free(c);
    c = NULL;
}
