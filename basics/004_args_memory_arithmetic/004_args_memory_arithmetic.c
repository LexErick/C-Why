#include <stdio.h>

int main (int argc, char **argv){

/* Variable 'argc' holds the number of command line arguments, meanwhile '(void*)' helps to cast so the types matches */
    printf("\n [--- Program to Print Memory Addresses of Each Argument --- ]\n\n");

//    printf("[ - CASTING | Stored Word - ]\n");
//    for(int i = 1; i < argc; i++){
//        printf("Argument: [ %d ] - Word: [ %s ]\nMemory Address: [ %p ]\nPointer Itself: [ %p ]\n", i, argv[i], (void*)argv[i], (void*)&argv[i]);
//    }
//    printf("\n[ - CASTING | First Character Stored - ]\n");
//    for(int i = 1; i < argc; i++){
//        printf("Argument: [ %d ] - Character: [ %c ]\nMemory Address: [ %p ]\nPointer Itself: [ %p ]\n", i, argv[i][0], (void*)argv[i], (void*)&argv[i]);
//    }
    printf("\n[ - CASTING | Characters Stored | Not Using Pointer Arithmetic- ]\n");
    for(int i = 1; i < argc; i++){
        printf("\nWord: [ %s ]\n", argv[i]);
        for(int j = 0; argv[i][j] != '\0'; j++ ){
            printf("Argument: [ %d ] - Character: [ %c ]\nMemory Address: [ %p ]\n", i, argv[i][j], (void*)&argv[i][j]);
        }
        printf("Pointer itself: [ %p ]\n", (void*)&argv[i]);
    }
    printf("\n[ - CASTING | Characters Stored | Using Pointer Arithmetic- ]\n");
//    int j = 0;
    for(int i = 1; i < argc; i++){

        printf("\nWord: [ %s ]\n", *(argv + i));
        char *p = *(argv + i);
        while (*p != '\0') {
            printf("Argument: [ %d ] - Character: [ %c ]\nMemory Address: [ %p ]\n", i, *p, (void*)p);
	          p++;
        }
    }
//    printf("\n[ - NOT CASTING - ]\n");
//    for(int i = 1; i < argc; i++){
//        printf("Argument: [ %d ] - Character: [ %s ]\nMemory Address: [ %p ]\nPointer Itself: [ %p ]\n", i, argv[i], argv[i], &argv[i]);
//    }
  //    printf("%p\n", (void*)argv[1]);
    return 0;
}
