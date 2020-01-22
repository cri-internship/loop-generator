#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(200, "ones");
	double **B = create_two_dim_double(480, 690, "ones");
	double **A = create_two_dim_double(970, 220, "ones");

	for (int c = 5; c < 200; c++)
	  for (int b = 5; b < 200; b++)
	    for (int a = 5; a < 200; a++)
	    {
	      
	      C[a]=0.863;
	      C[a-5]=0.354;
	    }

    return 0;
}