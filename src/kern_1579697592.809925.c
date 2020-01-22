#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(960, "ones");
	float **B = create_two_dim_float(420, 20, "ones");
	float *A = create_one_dim_float(250, "ones");

	for (int c = 0; c < 19; c++)
	  for (int b = 0; b < 248; b++)
	    for (int a = 0; a < 248; a++)
	    {
	      
	      A[a]=B[a][b]*C[a];
	      A[a]=A[a]/C[a]*0.362;
	      
	      C[a]=C[a+5]*A[a];
	      
	      B[a][b]=B[a][b+1]+C[a]/A[a];
	      
	      float var_a=A[a]-0.408;
	      float var_b=A[a+2]+0.394;
	      
	      C[a]=A[a]*0.426;
	      B[a][b]=A[a+1]-0.948;
	    }

    return 0;
}