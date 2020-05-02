#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(16, 64, 64, "zeros");
	int *A = create_one_dim_int(524288, "zeros");
    clock_t start = clock();

	for (int b = 4; b < 64; b++)
	  for (int a = 5; a < 16; a++)
	  {
	    
	     A[a]=A[a-5]*B[a][b][a];
	    
	     B[a][b][a]=B[a-5][b-4][a-1]*20;
	    
	     A[a]=A[a-1]+35;
	    
	     int var_a=B[a][b][a]*38;
	     int var_b=B[a-1][b-2][a-3]*49;
	    
	     int var_c=B[a][b][a]*29;
	     int var_d=B[a-1][b-2][a]-7;
	  }

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
	deallocate_3d_array(B, 16, 64, 64);
	deallocate_1d_array(A);
    return 0; 
    }