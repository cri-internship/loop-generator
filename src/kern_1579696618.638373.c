#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(550, 240, 900, "ones");
	double **D = create_two_dim_double(330, 350, "ones");
	double **B = create_two_dim_double(600, 420, "ones");
	double *A = create_one_dim_double(210, "ones");
	double *E = create_one_dim_double(130, "ones");

	for (int c = 0; c < 129; c++)
	  for (int b = 0; b < 129; b++)
	    for (int a = 0; a < 129; a++)
	    {
	      
	      double var_a=E[a]-0.769;
	      double var_b=E[a+1]/0.757;
	    }

    return 0;
}