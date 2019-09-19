#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(50, 50, "random");
	float ***C = create_three_dim_float(40, 150, 80, "random");
	float *A = create_one_dim_float(100, "random");

	for (int c = 4; c < 50; c++)
	  for (int b = 3; b < 50; b++)
	    for (int a = 3; a < 50; a++)
	    {
	      
	      A[a]=0.692;
	      float  var_a=A[a]*A[a-1]*0.13;
	      
	      B[a-3][b-2]=B[a-3][b-4]*0.961;
	    }

    return 0;
}