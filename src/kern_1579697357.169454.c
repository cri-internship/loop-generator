#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(30, 520, 360, "ones");
	double ***C = create_three_dim_double(170, 60, 80, "ones");
	double *B = create_one_dim_double(550, "ones");
	double ***E = create_three_dim_double(710, 790, 70, "ones");
	double **D = create_two_dim_double(80, 340, "ones");

	for (int a = 4; a < 30; a++)
	{
	  
	    E[a][a][a]=E[a+1][a+1][a+2]-C[a][a][a]+A[a][a][a];
	  
	    C[a][a][a]=C[a][a][a+3]+0.378;
	  
	    E[a][a][a]=E[a+5][a+4][a+5]*0.596;
	  
	    A[a][a][a]=B[a]*D[a][a]/E[a][a][a];
	    A[a-4][a][a]=C[a][a][a];
	}

    return 0;
}