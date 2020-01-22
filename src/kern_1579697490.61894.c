#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(990, "zeros");
	double **A = create_two_dim_double(920, 420, "zeros");
	double ***D = create_three_dim_double(380, 60, 980, "zeros");
	double ***C = create_three_dim_double(560, 360, 20, "zeros");

	for (int c = 0; c < 20; c++)
	  for (int b = 0; b < 360; b++)
	    for (int a = 0; a < 555; a++)
	    {
	      
	      double var_a=C[a][b][c]*0.949;
	      double var_b=C[a+5][b][c]-0.203;
	    }

    return 0;
}