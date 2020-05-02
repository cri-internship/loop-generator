#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(128, 128, "random");
	int **B = create_two_dim_int(512, 512, "random");
    clock_t start = clock();

	for (int c = 0; c < 124; c++)
	  for (int b = 2; b < 124; b++)
	    for (int a = 2; a < 124; a++)
	    {
	      
	      B[a][b]=B[a-2][b]-45;
	      
	      A[a][b]=A[a+4][b+4]-B[a][b];
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(A, 128, 128);
	deallocate_2d_array(B, 512, 512);
    return 0; 
    }