#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(450, 200, 280, "zeros");
	double **E = create_two_dim_double(630, 550, "zeros");
	double ***D = create_three_dim_double(220, 150, 220, "zeros");
	double *C = create_one_dim_double(660, "zeros");
	double *A = create_one_dim_double(40, "zeros");

	for (int a = 4; a < 450; a++)
	{
	  
	    E[a][a]=E[a-3][a-4]/0.032;
	  
	    E[a][a]=E[a+5][a+5]+D[a][a][a];
	  
	    double var_a=B[a][a][a]*0.384;
	    double var_b=B[a-3][a-1][a-1]-0.107;
	}

    return 0;
}