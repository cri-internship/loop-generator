#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(524288, "zeros");
	int ***B = create_three_dim_int(16, 16, 64, "zeros");
    clock_t start = clock();

	for (int c = 5; c < 64; c++)
	  for (int b = 2; b < 16; b++)
	    for (int a = 5; a < 16; a++)
	    {
	      
	      A[a]=A[a-2]+30;
	      
	      A[a]=A[a+1]*B[a][b][c];
	      
	      int var_a=B[a][b][c]-33;
	      int var_b=B[a][b-2][c-5]-31;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(A);
	deallocate_3d_array(B, 16, 16, 64);
    return 0; 
    }