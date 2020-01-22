#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(800, 500, "zeros");
	double ***C = create_three_dim_double(310, 390, 830, "zeros");
	double *B = create_one_dim_double(520, "zeros");

	for (int a = 5; a < 305; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]*0.803;
	  
	    C[a][a][a]=C[a+1][a][a]/A[a][a]*A[a][a];
	  
	    A[a][a]=A[a+2][a+2]/C[a][a][a]-C[a][a][a];
	  
	    C[a][a][a]=B[a];
	  
	    double var_a=C[a][a][a]/0.448;
	    double var_b=C[a+1][a+3][a+1]+0.725;
	}

    return 0;
}