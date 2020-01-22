#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(240, 70, "ones");
	float *A = create_one_dim_float(660, "ones");

	for (int c = 4; c < 70; c++)
	  for (int b = 3; b < 240; b++)
	    for (int a = 3; a < 240; a++)
	    {
	      
	      B[a][b]=B[a-3][b-4]*0.63;
	    }

    return 0;
}