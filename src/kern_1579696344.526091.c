#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(120, 1000, 550, "zeros");
	double *B = create_one_dim_double(530, "zeros");
	double **A = create_two_dim_double(490, 50, "zeros");

	for (int a = 5; a < 115; a++)
	{
	  
	    B[a]=0.376;
	    float  var_a=B[a]*0.333;
	  
	    B[a]=B[a-1]+0.136;
	  
	    B[a]=B[a+4]/A[a][a]-C[a][a][a];
	  
	    C[a][a][a]=0.283;
	    C[a+5][a][a]=0.742;
	  
	    A[a][a]=0.028;
	    A[a+4][a+3]=0.059;
	  
	    double var_b=C[a][a][a]*0.972;
	    double var_c=C[a-5][a-1][a-1]+0.769;
	  
	    double var_d=A[a][a]/0.479;
	}

    return 0;
}