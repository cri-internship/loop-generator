#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(530, 510, "ones");
	double **D = create_two_dim_double(440, 140, "ones");
	double *B = create_one_dim_double(560, "ones");
	double *A = create_one_dim_double(850, "ones");
	double **C = create_two_dim_double(180, 290, "ones");

	for (int a = 0; a < 435; a++)
	{
	  
	    E[a][a]=E[a+5][a]+C[a][a]-D[a][a];
	  
	    double var_a=D[a][a]*0.152;
	    double var_b=D[a+4][a+5]+0.267;
	}

    return 0;
}