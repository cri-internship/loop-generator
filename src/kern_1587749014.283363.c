#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(131072, "zeros");
	int ***A = create_three_dim_int(32, 32, 64, "zeros");
	int **B = create_two_dim_int(512, 512, "zeros");
    clock_t start = clock();

	for (int d = 0; d < 60; d++)
	  for (int c = 0; c < 31; c++)
	    for (int b = 1; b < 28; b++)
	      for (int a = 1; a < 28; a++)
	      {
	        
	       C[a]=C[a-1]-B[a][b];
	        
	       A[a][b][c]=A[a+4][b+1][c+4]-C[a]*23;
	        
	       int var_a=B[a][b]-49;
	       int var_b=B[a+3][b]+43;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_1d_array(C);
	deallocate_3d_array(A, 32, 32, 64);
	deallocate_2d_array(B, 512, 512);
    return 0; 
    }