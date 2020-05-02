#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(128, 128, "zeros");
	int ***A = create_three_dim_int(64, 16, 64, "zeros");
    clock_t start = clock();

	for (int d = 4; d < 59; d++)
	  for (int c = 2; c < 12; c++)
	    for (int b = 3; b < 59; b++)
	      for (int a = 3; a < 59; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-2][c-4]-B[a][b];
	        
	       A[a][b][c]=13;
	        
	       int var_a=A[a][b][c]*6;
	       int var_b=A[a+5][b+3][c+3]-5;
	      }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_2d_array(B, 128, 128);
	deallocate_3d_array(A, 64, 16, 64);
    return 0; 
    }