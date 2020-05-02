#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(512, 128, "ones");
	int **A = create_two_dim_int(128, 256, "ones");
	int *C = create_one_dim_int(131072, "ones");
    clock_t start = clock();

	for (int c = 0; c < 128; c++)
	  for (int b = 5; b < 512; b++)
	    for (int a = 5; a < 512; a++)
	    {
	      
	      C[a]=B[a][b]-A[a][b];
	      A[a][b]=B[a-5][b]+C[a]*28;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(B, 512, 128);
	deallocate_2d_array(A, 128, 256);
	deallocate_1d_array(C);
    return 0; 
    }