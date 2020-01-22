#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(910, 850, "zeros");
	double *A = create_one_dim_double(110, "zeros");
	double ***B = create_three_dim_double(560, 550, 160, "zeros");

	for (int a = 5; a < 556; a++)
	{
	  
	    C[a][a]=C[a-4][a-4]+0.216;
	  
	    B[a][a][a]=B[a+4][a+1][a+3]*0.216;
	  
	    C[a][a]=B[a][a][a]-A[a];
	  
	    double var_a=C[a][a]-0.453;
	    double var_b=C[a-1][a-1]/0.172;
	}

    return 0;
}