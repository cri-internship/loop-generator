#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(210, 850, "ones");
	float *A = create_one_dim_float(210, "ones");

	for (int c = 5; c < 848; c++)
	  for (int b = 5; b < 205; b++)
	    for (int a = 5; a < 205; a++)
	    {
	      
	      A[a]=B[a][b];
	      B[a][b]=A[a]+0.075;
	      
	      A[a]=A[a+5]+B[a][b];
	      
	      B[a][b]=A[a];
	      
	      float var_a=B[a][b]-0.286;
	      float var_b=B[a-5][b-3]-0.467;
	      
	      float var_c=B[a][b]+0.566;
	      float var_d=B[a-5][b-5]+0.041;
	    }

    return 0;
}