#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(860, 180, "zeros");
	float *D = create_one_dim_float(970, "zeros");
	float *E = create_one_dim_float(600, "zeros");
	float *B = create_one_dim_float(470, "zeros");
	float *C = create_one_dim_float(400, "zeros");

	for (int d = 5; d < 177; d++)
	  for (int c = 5; c < 470; c++)
	    for (int b = 5; b < 470; b++)
	      for (int a = 5; a < 470; a++)
	      {
	        
	       A[a][b]=A[a-5][b-5]+C[a]-D[a]/B[a];
	        
	       E[a]=A[a][b]*A[a][b]/C[a];
	       B[a]=E[a]/C[a]-D[a]+B[a]*A[a][b];
	        
	       A[a][b]=A[a-5][b-3]+0.723;
	        
	       D[a]=E[a]+C[a]/B[a]*E[a];
	       D[a-3]=C[a]*A[a][b]/B[a]+E[a];
	        
	       float var_a=B[a]-0.764;
	       float var_b=B[a-4]/0.424;
	      }

    return 0;
}