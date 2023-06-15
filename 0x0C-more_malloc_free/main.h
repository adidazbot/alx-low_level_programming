#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
int main(void);
char *_initialize_array(char *ar, int lar);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int _checknum(char *argv[], int n);
#endif
