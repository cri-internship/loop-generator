#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(150, 980, "zeros");
	float *A = create_one_dim_float(320, "zeros");

	for (int c = 0; c < 977; c++)
	  for (int b = 2; b < 145; b++)
	    for (int a = 2; a < 145; a++)
	    {
	      
	      B[a][b]=B[a-2][b]-0.692;
	      
	      A[a]=A[a-2]+B[a][b];
	      
	      A[a]=A[a+1]/0.339;
	      
	      B[a][b]=B[a+2][b+1]/0.327;
	    }

    return 0;
}