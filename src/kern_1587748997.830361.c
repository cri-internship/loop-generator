#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(65536, "zeros");
	int ***B = create_three_dim_int(16, 64, 32, "zeros");
    clock_t start = clock();

	for (int b = 4; b < 65536; b++)
	  for (int a = 4; a < 65536; a++)
	  {
	    
	     A[a]=A[a-4]*B[a][b][a];
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_3d_array(B, 16, 64, 32);
    return 0; 
    }
