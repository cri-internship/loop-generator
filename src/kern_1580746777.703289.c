#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	 int A[8192][8192] = {0};
	 int B[512][512][256] = {0};
	 int C[268435456] = {0};
    clock_t start = clock();

	for (int a = 5; a < 268435456; a++)
	{
	  
	    C[a]=C[a-5]-B[a][a][a];
	  
	    B[a][a][a]=C[a]-A[a][a]*A[a][a];
	    C[a]=C[a-2]*B[a][a][a]-15;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
    return 0; 
    }