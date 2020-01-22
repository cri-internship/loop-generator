#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(440, 150, 320, "random");
	double *C = create_one_dim_double(270, "random");
	double **B = create_two_dim_double(210, 730, "random");
	double ***E = create_three_dim_double(100, 260, 270, "random");
	double ***A = create_three_dim_double(870, 970, 310, "random");

	for (int a = 5; a < 100; a++)
	{
	  
	    D[a][a][a]=D[a-5][a-5][a-4]/A[a][a][a]+E[a][a][a]*0.031-B[a][a];
	  
	    B[a][a]=B[a+3][a]/D[a][a][a]+A[a][a][a]-E[a][a][a]*D[a][a][a];
	  
	    C[a]=B[a][a]-0.822+D[a][a][a];
	    C[a-3]=D[a][a][a]-A[a][a][a]+E[a][a][a];
	  
	    C[a]=0.968;
	  
	    D[a][a][a]=B[a][a]*A[a][a][a];
	    A[a][a][a]=B[a+5][a+1]*C[a]/A[a][a][a]-0.142+E[a][a][a];
	  
	    double var_a=A[a][a][a]*0.272;
	    double var_b=A[a+5][a+1][a+2]+0.17;
	  
	    double var_c=E[a][a][a]/0.489;
	    double var_d=E[a][a-5][a-5]+0.891;
	}

    return 0;
}