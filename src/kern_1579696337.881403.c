#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(600, "zeros");
	double *A = create_one_dim_double(440, "zeros");
	double **C = create_two_dim_double(270, 710, "zeros");
	double *B = create_one_dim_double(240, "zeros");

	for (int c = 4; c < 710; c++)
	  for (int b = 5; b < 235; b++)
	    for (int a = 5; a < 235; a++)
	    {
	      
	      B[a]=B[a+5]/D[a]+0.463;
	      
	      double var_a=C[a][b]+0.665;
	      double var_b=C[a-5][b-4]*0.507;
	    }

    return 0;
}