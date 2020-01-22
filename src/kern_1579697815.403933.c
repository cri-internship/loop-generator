#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(70, "random");
	double **A = create_two_dim_double(210, 590, "random");

	for (int c = 5; c < 588; c++)
	  for (int b = 1; b < 205; b++)
	    for (int a = 1; a < 205; a++)
	    {
	      
	      A[a][b]=A[a-1][b-5]+B[a];
	      
	      A[a][b]=0.215;
	    }

    return 0;
}