#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(65536, "ones");
	int **B = create_two_dim_int(128, 512, "ones");
    clock_t start = clock();

	for (int a = 2; a < 65533; a++)
	{
	  
	    A[a]=A[a+3]-B[a][a];
	  
	    int var_a=A[a]*15;
	    int var_b=A[a-2]+27;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_2d_array(B, 128, 512);
    return 0; 
    }