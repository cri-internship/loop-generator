#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(940, 930, "zeros");
	double ***E = create_three_dim_double(800, 670, 730, "zeros");
	double **C = create_two_dim_double(460, 30, "zeros");
	double ***D = create_three_dim_double(260, 990, 870, "zeros");
	double **B = create_two_dim_double(240, 490, "zeros");

	for (int a = 0; a < 257; a++)
	{
	  
	    D[a][a][a]=0.725;
	    D[a+1][a+3][a+1]=0.251;
	  
	    double var_a=C[a][a]+0.731;
	    double var_b=C[a+2][a+2]/0.89;
	}

    return 0;
}