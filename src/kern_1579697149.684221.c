#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(40, "ones");
	float **B = create_two_dim_float(850, 360, "ones");

	for (int c = 0; c < 360; c++)
	  for (int b = 5; b < 36; b++)
	    for (int a = 5; a < 36; a++)
	    {
	      
	      B[a][b]=B[a-5][b]+A[a];
	      
	      A[a]=A[a+3]/B[a][b];
	      
	      A[a]=0.063;
	      
	      float var_a=A[a]-0.116;
	      float var_b=A[a+4]/0.75;
	    }

    return 0;
}