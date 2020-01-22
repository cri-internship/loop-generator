#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(590, "ones");
	double **A = create_two_dim_double(290, 880, "ones");
	double ***C = create_three_dim_double(850, 890, 390, "ones");
	double *D = create_one_dim_double(780, "ones");

	for (int a = 5; a < 589; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-3][a-1]*A[a][a]/B[a];
	  
	    C[a][a][a]=B[a]+D[a]-C[a][a][a]/0.667;
	    A[a][a]=B[a+1]/A[a][a]-C[a][a][a];
	  
	    double var_a=C[a][a][a]-0.575;
	    double var_b=C[a][a-4][a-1]*0.659;
	}

    return 0;
}