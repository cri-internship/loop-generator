#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(16, 64, 64, "random");
	int *B = create_one_dim_int(131072, "random");
	int ***A = create_three_dim_int(16, 16, 64, "random");
    clock_t start = clock();

	for (int d = 4; d < 62; d++)
	  for (int c = 2; c < 16; c++)
	    for (int b = 5; b < 13; b++)
	      for (int a = 5; a < 13; a++)
	      {
	        
	       B[a]=B[a-5]+A[a][b][c];
	        
	       B[a]=B[a-4]-50*A[a][b][c];
	        
	       C[a][b][c]=C[a][b+5][c]*15;
	        
	       C[a][b][c]=B[a];
	        
	       A[a][b][c]=A[a][b][c]-24;
	       B[a]=A[a-3][b-2][c]-C[a][b][c];
	        
	       int var_a=C[a][b][c]-8;
	       int var_b=C[a-5][b-1][c-4]+4;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(C, 16, 64, 64);
	deallocate_1d_array(B);
	deallocate_3d_array(A, 16, 16, 64);
    return 0; 
    }