#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(64, 32, 64, "zeros");
	int *A = create_one_dim_int(131072, "zeros");
	int *C = create_one_dim_int(131072, "zeros");
    clock_t start = clock();

	for (int c = 2; c < 64; c++)
	  for (int b = 4; b < 32; b++)
	    for (int a = 5; a < 64; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-2][c]*41;
	      
	      C[a]=C[a+5]+16;
	      
	      C[a]=27;
	      
	      B[a][b][c]=31;
	      
	      int var_a=A[a]+8;
	      int var_b=A[a-5]-9;
	    }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 64, 32, 64);
	deallocate_1d_array(A);
	deallocate_1d_array(C);
    return 0; 
    }