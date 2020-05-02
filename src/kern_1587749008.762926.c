#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(524288, "ones");
	int *B = create_one_dim_int(524288, "ones");
    clock_t start = clock();

	for (int c = 2; c < 524283; c++)
	  for (int b = 2; b < 524283; b++)
	    for (int a = 2; a < 524283; a++)
	    {
	      
	      A[a]=4;
	      A[a]=A[a]-B[a];
	      
	      A[a]=A[a-2]*B[a];
	      
	      A[a]=A[a+3]*B[a];
	      
	      B[a]=B[a+5]*34;
	      
	      B[a]=B[a+1]*30;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_1d_array(B);
    return 0; 
    }