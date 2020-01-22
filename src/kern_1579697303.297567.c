#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(630, 30, "zeros");
	double *D = create_one_dim_double(420, "zeros");
	double ***C = create_three_dim_double(630, 360, 590, "zeros");
	double *E = create_one_dim_double(140, "zeros");
	double *B = create_one_dim_double(50, "zeros");

	for (int a = 0; a < 50; a++)
	{
	  
	    E[a]=E[a+2]-D[a]+A[a][a]*C[a][a][a];
	  
	    double var_a=B[a]*0.726;
	    B[a]=0.23;
	  
	    D[a]=0.693;
	    D[a+3]=0.985;
	}

    return 0;
}