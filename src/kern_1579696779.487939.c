#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(210, "random");
	float *C = create_one_dim_float(620, "random");
	float *A = create_one_dim_float(880, "random");

	for (int d = 5; d < 208; d++)
	  for (int c = 5; c < 208; c++)
	    for (int b = 5; b < 208; b++)
	      for (int a = 5; a < 208; a++)
	      {
	        
	       B[a]=B[a-5]*C[a];
	        
	       B[a]=0.974;
	        
	       B[a]=B[a]*A[a];
	       C[a]=B[a+2]-C[a];
	        
	       float var_a=B[a]-0.839;
	       float var_b=B[a+1]*0.803;
	        
	       float var_c=C[a]*0.084;
	       float var_d=C[a-4]-0.679;
	      }

    return 0;
}