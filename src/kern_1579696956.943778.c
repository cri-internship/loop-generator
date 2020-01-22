#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(380, "zeros");
	double **A = create_two_dim_double(530, 240, "zeros");
	double ***B = create_three_dim_double(60, 100, 780, "zeros");

	for (int a = 0; a < 55; a++)
	{
	  
	    B[a][a][a]=B[a+5][a][a+5]*C[a];
	  
	    double var_a=B[a][a][a]-0.491;
	    double var_b=B[a+4][a+1][a+4]/0.591;
	  
	    double var_c=C[a]-0.872;
	    double var_d=C[a+3]+0.051;
	}

    return 0;
}