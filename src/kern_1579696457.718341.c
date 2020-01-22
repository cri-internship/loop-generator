#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(860, "ones");
	float **A = create_two_dim_float(670, 190, "ones");

	for (int c = 4; c < 190; c++)
	  for (int b = 5; b < 670; b++)
	    for (int a = 5; a < 670; a++)
	    {
	      
	      B[a]=B[a-4]-0.181;
	      
	      A[a][b]=A[a-5][b-1]+B[a];
	      
	      float  var_a=B[a]/0.668;
	      
	      A[a][b]=A[a][b-1]*B[a];
	      
	      float var_b=B[a]+0.286;
	      
	      float var_d=A[a][b]+0.403;
	      float var_e=A[a-2][b-2]-0.961;
	    }

    return 0;
}