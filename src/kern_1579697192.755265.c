#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(780, "ones");
	float *D = create_one_dim_float(650, "ones");
	float ***A = create_three_dim_float(410, 210, 200, "ones");
	float *B = create_one_dim_float(760, "ones");

	for (int d = 0; d < 195; d++)
	  for (int c = 0; c < 206; c++)
	    for (int b = 5; b < 407; b++)
	      for (int a = 5; a < 407; a++)
	      {
	        
	       D[a]=A[a][b][c]*B[a]-C[a];
	       B[a]=D[a]*B[a]+C[a]-0.374;
	        
	       C[a]=D[a]-B[a]/D[a];
	       C[a]=C[a]*B[a]-0.242+A[a][b][c];
	        
	       B[a]=A[a][b][c];
	       D[a]=B[a]-D[a]+A[a][b][c]/0.281;
	        
	       A[a][b][c]=A[a+3][b+4][c+5]-C[a]/D[a];
	        
	       A[a][b][c]=C[a]-0.046;
	       A[a][b][c]=C[a+4]-B[a];
	        
	       float var_a=D[a]+0.92;
	       float var_b=D[a-5]/0.15;
	      }

    return 0;
}