#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(20, 960, "random");
	double *B = create_one_dim_double(610, "random");

	for (int c = 0; c < 956; c++)
	  for (int b = 5; b < 15; b++)
	    for (int a = 5; a < 15; a++)
	    {
	      
	      A[a][b]=A[a+5][b+4]-0.867;
	      
	      B[a]=B[a+1]/0.276;
	      
	      B[a]=0.683;
	    }

    return 0;
}