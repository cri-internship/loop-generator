#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(256, 256, "ones");
	int **A = create_two_dim_int(128, 512, "ones");
    clock_t start = clock();

	for (int c = 5; c < 507; c++)
	  for (int b = 5; b < 124; b++)
	    for (int a = 5; a < 124; a++)
	    {
	      
	      A[a][b]=A[a+1][b+2]-27;
	      
	      A[a][b]=7;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(B, 256, 256);
	deallocate_2d_array(A, 128, 512);
    return 0; 
    }