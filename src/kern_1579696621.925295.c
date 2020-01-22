#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "random");
	double **B = create_two_dim_double(450, 670, "random");

	for (int c = 0; c < 559; c++)
	  for (int b = 0; b < 559; b++)
	    for (int a = 0; a < 559; a++)
	    {
	      
	      A[a]=A[a+1]+0.615;
	    }

    return 0;
}