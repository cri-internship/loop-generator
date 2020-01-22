#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(980, 510, 710, "random");
	float *A = create_one_dim_float(70, "random");
	float *C = create_one_dim_float(790, "random");

	for (int d = 5; d < 710; d++)
	  for (int c = 2; c < 506; c++)
	    for (int b = 5; b < 65; b++)
	      for (int a = 5; a < 65; a++)
	      {
	        
	       A[a]=A[a-3]/0.033;
	        
	       A[a]=A[a+5]*0.08;
	        
	       C[a]=B[a][b][c];
	       C[a-4]=A[a]/A[a];
	        
	       float var_a=B[a][b][c]/0.099;
	       float var_b=B[a-5][b-2][c-5]+0.455;
	        
	       float var_c=B[a][b][c]-0.385;
	       float var_d=B[a+2][b+4][c]/0.797;
	      }

    return 0;
}