#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(490, 970, "ones");
	float *B = create_one_dim_float(110, "ones");

	for (int c = 4; c < 966; c++)
	  for (int b = 4; b < 105; b++)
	    for (int a = 4; a < 105; a++)
	    {
	      
	      A[a][b]=A[a-4][b-4]-B[a];
	      
	      A[a][b]=A[a+5][b+4]-0.261;
	      
	      float var_a=B[a]*0.626;
	      float var_b=B[a+5]-0.916;
	    }

    return 0;
}