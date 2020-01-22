#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(490, 310, "random");
	float *D = create_one_dim_float(60, "random");
	float **B = create_two_dim_float(920, 210, "random");
	float **A = create_two_dim_float(150, 690, "random");

	for (int c = 1; c < 210; c++)
	  for (int b = 2; b < 920; b++)
	    for (int a = 2; a < 920; a++)
	    {
	      
	      B[a][b]=B[a-2][b-1]*0.451;
	    }

    return 0;
}