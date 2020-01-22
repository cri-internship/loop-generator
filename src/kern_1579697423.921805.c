#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(610, 490, "zeros");
	double *B = create_one_dim_double(850, "zeros");

	for (int c = 2; c < 850; c++)
	  for (int b = 2; b < 850; b++)
	    for (int a = 2; a < 850; a++)
	    {
	      
	      B[a]=B[a-2]*A[a][b];
	      
	      double var_a=B[a]+0.356;
	      double var_b=B[a]/0.821;
	    }

    return 0;
}