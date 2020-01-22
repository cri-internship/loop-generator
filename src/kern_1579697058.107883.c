#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(390, "random");
	double *A = create_one_dim_double(790, "random");
	double ***D = create_three_dim_double(310, 680, 860, "random");
	double ***B = create_three_dim_double(380, 720, 40, "random");

	for (int a = 5; a < 305; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-4][a-5]+0.77;
	  
	    D[a][a][a]=D[a][a+5][a+4]-0.522;
	  
	    A[a]=A[a]*B[a][a][a]-C[a]/D[a][a][a];
	    C[a]=A[a-3]+D[a][a][a]/B[a][a][a];
	  
	    double var_a=B[a][a][a]-0.628;
	    double var_b=B[a-3][a][a-2]*0.575;
	  
	    D[a][a][a]=C[a]-A[a];
	    B[a][a][a]=C[a+1]/A[a];
	}

    return 0;
}