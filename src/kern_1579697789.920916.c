#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(710, 950, "zeros");
	double ***B = create_three_dim_double(470, 240, 640, "zeros");
	double *A = create_one_dim_double(930, "zeros");

	for (int a = 5; a < 465; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-3][a-5]*0.504;
	  
	    double var_a=B[a][a][a]-0.041;
	    double var_b=B[a+4][a+5][a+5]-0.516;
	}

    return 0;
}