#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(65536, "zeros");
	int **A = create_two_dim_int(256, 128, "zeros");
	int **C = create_two_dim_int(512, 128, "zeros");
    clock_t start = clock();

	for (int d = 4; d < 128; d++)
	  for (int c = 2; c < 512; c++)
	    for (int b = 2; b < 512; b++)
	      for (int a = 2; a < 512; a++)
	      {
	        
	       int var_a=C[a][b]*38;
	       int var_b=C[a-2][b-4]+22;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(B);
	deallocate_2d_array(A, 256, 128);
	deallocate_2d_array(C, 512, 128);
    return 0; 
    }