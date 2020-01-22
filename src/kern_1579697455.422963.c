#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(450, 620, "ones");
	double *B = create_one_dim_double(150, "ones");

	for (int c = 3; c < 620; c++)
	  for (int b = 5; b < 147; b++)
	    for (int a = 5; a < 147; a++)
	    {
	      
	      A[a][b]=A[a-5][b-3]/B[a];
	      
	      B[a]=B[a-3]/0.208;
	      
	      B[a]=B[a-4]-0.713;
	      
	      B[a]=B[a+3]-A[a][b];
	    }

    return 0;
}