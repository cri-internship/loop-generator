#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(120, "ones");
	float *B = create_one_dim_float(790, "ones");
	float **A = create_two_dim_float(350, 690, "ones");
	float *D = create_one_dim_float(980, "ones");
	float *C = create_one_dim_float(10, "ones");

	for (int d = 3; d < 10; d++)
	  for (int c = 3; c < 10; c++)
	    for (int b = 3; b < 10; b++)
	      for (int a = 3; a < 10; a++)
	      {
	        
	       B[a]=B[a-3]+C[a]*D[a]-A[a][b];
	        
	       C[a]=C[a-1]+0.588/B[a]-A[a][b];
	        
	       B[a]=C[a]-0.633;
	        
	       B[a]=B[a-2]-0.549;
	        
	       float var_b=D[a]+0.888;
	       float var_c=D[a+4]-0.914;
	        
	       float var_d=E[a]/0.866;
	       float var_e=E[a-2]+0.923;
	      }

    return 0;
}