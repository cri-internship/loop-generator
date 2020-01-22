#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(410, "zeros");
	float *D = create_one_dim_float(720, "zeros");
	float ***B = create_three_dim_float(310, 530, 240, "zeros");
	float *E = create_one_dim_float(560, "zeros");
	float *C = create_one_dim_float(220, "zeros");

	for (int d = 4; d < 219; d++)
	  for (int c = 4; c < 219; c++)
	    for (int b = 4; b < 219; b++)
	      for (int a = 4; a < 219; a++)
	      {
	        
	       C[a]=D[a]+B[a][b][c]/A[a];
	       A[a]=C[a]*E[a]-E[a]+B[a][b][c];
	        
	       A[a]=A[a+3]/0.221;
	        
	       D[a]=0.899-B[a][b][c]/C[a]*E[a];
	       D[a-1]=C[a]+B[a][b][c];
	        
	       D[a]=0.85;
	        
	       float var_a=C[a]/0.887;
	       float var_b=C[a+1]*0.887;
	        
	       float var_c=A[a]+0.317;
	       float var_d=A[a-3]/0.288;
	      }

    return 0;
}