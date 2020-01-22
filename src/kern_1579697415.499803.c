#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(930, "zeros");
	double **A = create_two_dim_double(640, 60, "zeros");
	double **C = create_two_dim_double(970, 920, "zeros");

	for (int c = 0; c < 919; c++)
	  for (int b = 0; b < 927; b++)
	    for (int a = 0; a < 927; a++)
	    {
	      
	      double var_a=B[a]/0.096;
	      double var_b=B[a+3]*0.624;
	      
	      double var_c=C[a][b]+0.083;
	      double var_d=C[a+3][b+1]*0.245;
	    }

    return 0;
}