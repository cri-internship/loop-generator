#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	 int A[268435456] = {0};
    clock_t start = clock();

	for (int a = 2; a < 268435452; a++)
	{
	  
	    A[a]=A[a-1]+41;
	  
	    A[a]=A[a+3]+28;
	  
	    int var_a=A[a]*11;
	    int var_b=A[a-2]*46;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
    return 0; 
    }