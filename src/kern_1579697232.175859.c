#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(570, "ones");
	float **A = create_two_dim_float(140, 800, "ones");

	for (int c = 0; c < 800; c++)
	  for (int b = 0; b < 138; b++)
	    for (int a = 0; a < 138; a++)
	    {
	      
	      A[a][b]=0.104;
	      A[a+2][b]=0.282;
	    }

    return 0;
}