#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(890, 750, "random");
	double ***C = create_three_dim_double(420, 360, 260, "random");
	double *B = create_one_dim_double(790, "random");

	for (int a = 5; a < 415; a++)
	{
	  
	    A[a][a]=A[a-5][a-3]*0.044;
	  
	    C[a][a][a]=C[a+3][a+4][a+4]*0.781;
	  
	    C[a][a][a]=C[a+4][a+3][a+3]+B[a]/A[a][a];
	  
	    A[a][a]=A[a+3][a+5]*C[a][a][a]/0.934;
	  
	    C[a][a][a]=C[a+3][a+2][a+5]+0.07;
	  
	    double var_a=C[a][a][a]+0.851;
	    double var_b=C[a+5][a+3][a+2]/0.328;
	}

    return 0;
}