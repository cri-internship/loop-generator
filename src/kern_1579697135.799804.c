#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(640, 990, "zeros");
	double **A = create_two_dim_double(760, 630, "zeros");

	for (int c = 0; c < 990; c++)
	  for (int b = 1; b < 640; b++)
	    for (int a = 1; a < 640; a++)
	    {
	      
	      B[a][b]=B[a-1][b]/0.182;
	    }

    return 0;
}