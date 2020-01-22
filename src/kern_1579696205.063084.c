#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(580, 360, "ones");
	double **A = create_two_dim_double(690, 690, "ones");
	double **C = create_two_dim_double(170, 660, "ones");
	double ***E = create_three_dim_double(290, 70, 30, "ones");
	double *B = create_one_dim_double(770, "ones");

	for (int a = 0; a < 576; a++)
	{
	  
	    D[a][a]=D[a+2][a+4]-0.512;
	}

    return 0;
}