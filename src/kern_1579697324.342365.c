#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(570, 660, "ones");
	double **A = create_two_dim_double(560, 990, "ones");
	double *B = create_one_dim_double(270, "ones");

	for (int c = 0; c < 270; c++)
	  for (int b = 0; b < 270; b++)
	    for (int a = 0; a < 270; a++)
	    {
	      
	      B[a]=0.778;
	      B[a]=0.198;
	    }

    return 0;
}