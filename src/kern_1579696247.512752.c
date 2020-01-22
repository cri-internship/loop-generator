#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(60, 340, "random");
	double *C = create_one_dim_double(950, "random");
	double **B = create_two_dim_double(290, 560, "random");
	double **A = create_two_dim_double(690, 860, "random");
	double ***D = create_three_dim_double(610, 60, 510, "random");

	for (int a = 5; a < 290; a++)
	{
	  
	    double var_a=B[a][a]+0.511;
	    double var_b=B[a-5][a-1]/0.353;
	}

    return 0;
}