#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(110, "ones");
	float *C = create_one_dim_float(550, "ones");
	float **B = create_two_dim_float(110, 240, "ones");
	float **A = create_two_dim_float(130, 670, "ones");

	for (int c = 1; c < 670; c++)
	  for (int b = 3; b < 129; b++)
	    for (int a = 3; a < 129; a++)
	    {
	      
	      A[a][b]=0.841;
	      A[a-3][b-1]=0.003;
	      
	      float var_a=A[a][b]+0.664;
	      float var_b=A[a+1][b]*0.329;
	    }

    return 0;
}