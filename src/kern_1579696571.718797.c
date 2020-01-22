#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(330, "zeros");
	double **A = create_two_dim_double(390, 360, "zeros");

	for (int c = 0; c < 327; c++)
	  for (int b = 0; b < 327; b++)
	    for (int a = 0; a < 327; a++)
	    {
	      
	      B[a]=B[a+3]/0.844;
	    }

    return 0;
}