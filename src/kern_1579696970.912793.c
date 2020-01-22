#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(420, "ones");
	double ***C = create_three_dim_double(990, 580, 50, "ones");
	double *D = create_one_dim_double(820, "ones");
	double **A = create_two_dim_double(640, 920, "ones");

	for (int a = 3; a < 418; a++)
	{
	  
	    B[a]=B[a+2]-D[a];
	  
	    double var_a=B[a]-0.774;
	    double var_b=B[a-3]-0.112;
	}

    return 0;
}