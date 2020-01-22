#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(630, 950, "random");
	double *B = create_one_dim_double(340, "random");

	for (int c = 5; c < 340; c++)
	  for (int b = 5; b < 340; b++)
	    for (int a = 5; a < 340; a++)
	    {
	      
	      B[a]=B[a-5]+A[a][b];
	    }

    return 0;
}