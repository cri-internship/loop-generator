#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(150, "random");
	double **A = create_two_dim_double(940, 400, "random");
	double ***C = create_three_dim_double(80, 900, 290, "random");

	for (int c = 0; c < 288; c++)
	  for (int b = 0; b < 898; b++)
	    for (int a = 1; a < 77; a++)
	    {
	      
	      B[a]=B[a-1]/0.986;
	      
	      double var_a=C[a][b][c]*0.47;
	      double var_b=C[a+3][b+2][c+2]+0.307;
	    }

    return 0;
}