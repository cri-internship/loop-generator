#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(270, 900, 870, "zeros");
	double ***A = create_three_dim_double(880, 360, 490, "zeros");
	double ***D = create_three_dim_double(930, 710, 830, "zeros");
	double *C = create_one_dim_double(170, "zeros");
	double *B = create_one_dim_double(470, "zeros");

	for (int a = 4; a < 168; a++)
	{
	  
	    E[a][a][a]=E[a-2][a-2][a-2]/0.016;
	  
	    A[a][a][a]=A[a+3][a+3][a+4]/0.044;
	  
	    C[a]=C[a+2]-D[a][a][a]+0.872/A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a+5][a+4]/0.737;
	  
	    double var_a=A[a][a][a]*0.199;
	    double var_b=A[a-4][a-1][a]/0.99;
	  
	    D[a][a][a]=D[a][a][a]-C[a];
	    C[a]=D[a-2][a-3][a-1]*C[a]/A[a][a][a]+E[a][a][a];
	}

    return 0;
}