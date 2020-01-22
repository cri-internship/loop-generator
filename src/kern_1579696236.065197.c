#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(460, 130, "ones");
	float *D = create_one_dim_float(970, "ones");
	float *C = create_one_dim_float(890, "ones");
	float **B = create_two_dim_float(480, 150, "ones");
	float *E = create_one_dim_float(450, "ones");

	for (int d = 2; d < 130; d++)
	  for (int c = 3; c < 447; c++)
	    for (int b = 3; b < 447; b++)
	      for (int a = 3; a < 447; a++)
	      {
	        
	       A[a][b]=A[a-3][b-2]*C[a]/B[a][b]+E[a];
	        
	       float var_a=D[a]-0.593;
	       D[a]=0.356;
	        
	       E[a]=0.662;
	       E[a+3]=0.039;
	        
	       A[a][b]=D[a]+B[a][b];
	        
	       float var_b=C[a]/0.648;
	       float var_c=C[a+1]/0.56;
	        
	       C[a]=C[a]/A[a][b]*B[a][b];
	       D[a]=C[a-2]/A[a][b]+E[a];
	      }

    return 0;
}