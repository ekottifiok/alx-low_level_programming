#if !defined(SEARCH_ALGOS)
#define SEARCH_ALGOS

/* NECESSARY IMPORTS */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fenv.h>
 
#pragma STDC FENV_ACCESS ON
/* FUNCTION DECLARATIONS */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS */
