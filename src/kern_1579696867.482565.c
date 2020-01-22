#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(900, 30, 770, "random");
	double ***A = create_three_dim_double(950, 610, 760, "random");
	double **D = create_two_dim_double(190, 550, "random");
	double *B = create_one_dim_double(990, "random");

	for (int a = 0; a < 896; a++)
	{
	  
	    C[a][a][a]=C[a+4][a+2][a]/0.732;
	  
	    double var_a=A[a][a][a]*0.057;
	    double var_b=A[a+2][a][a+2]*0.805;
	  
	    D[a][a]=B[a]/D[a][a]-A[a][a][a]*C[a][a][a];
	    C[a][a][a]=B[a+3]/C[a][a][a]-A[a][a][a];
	}

    return 0;
}