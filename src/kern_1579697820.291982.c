#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(750, "random");
	double **B = create_two_dim_double(550, 640, "random");
	double ***C = create_three_dim_double(990, 430, 630, "random");

	for (int c = 5; c < 640; c++)
	  for (int b = 2; b < 550; b++)
	    for (int a = 2; a < 550; a++)
	    {
	      
	      double var_a=B[a][b]+0.688;
	      double var_b=B[a-2][b-5]-0.248;
	    }

    return 0;
}