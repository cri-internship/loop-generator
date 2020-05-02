#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(524288, "zeros");
	int *A = create_one_dim_int(524288, "zeros");
    clock_t start = clock();

	for (int c = 4; c < 524288; c++)
	  for (int b = 4; b < 524288; b++)
	    for (int a = 4; a < 524288; a++)
	    {
	      
	      A[a]=A[a-4]*26;
	      
	      A[a]=49;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_1d_array(A);
    return 0; 
    }