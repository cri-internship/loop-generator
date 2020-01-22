#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(730, 860, "random");
	double *D = create_one_dim_double(640, "random");
	double *A = create_one_dim_double(180, "random");
	double *C = create_one_dim_double(720, "random");
	double ***B = create_three_dim_double(830, 110, 680, "random");

	for (int a = 1; a < 636; a++)
	{
	  
	    C[a]=C[a-1]/0.731;
	  
	    D[a]=D[a+4]/0.352;
	  
	    double var_a=B[a][a][a]*0.145;
	    double var_b=B[a+4][a+2][a+4]/0.66;
	}

    return 0;
}