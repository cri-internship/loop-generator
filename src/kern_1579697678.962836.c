#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(430, 500, "zeros");
	double **C = create_two_dim_double(510, 190, "zeros");
	double ***D = create_three_dim_double(50, 900, 920, "zeros");
	double *B = create_one_dim_double(550, "zeros");

	for (int c = 0; c < 549; c++)
	  for (int b = 0; b < 549; b++)
	    for (int a = 0; a < 549; a++)
	    {
	      
	      double var_a=B[a]*0.837;
	      double var_b=B[a+1]/0.297;
	    }

    return 0;
}