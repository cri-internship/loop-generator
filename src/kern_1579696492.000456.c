#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(650, 340, 260, "zeros");
	double ***A = create_three_dim_double(950, 590, 620, "zeros");
	double *C = create_one_dim_double(790, "zeros");
	double **D = create_two_dim_double(840, 70, "zeros");

	for (int a = 4; a < 645; a++)
	{
	  
	    D[a][a]=D[a-2][a-2]-0.146;
	  
	    C[a]=C[a+4]+B[a][a][a]-A[a][a][a];
	  
	    C[a]=0.24;
	  
	    B[a][a][a]=B[a][a][a]*C[a]-0.473;
	    C[a]=B[a+5][a+4][a+3]+A[a][a][a]*D[a][a]-C[a];
	  
	    D[a][a]=D[a][a]/C[a]-A[a][a][a]+0.844;
	    A[a][a][a]=D[a-4][a]*A[a][a][a];
	  
	    A[a][a][a]=C[a]*D[a][a]+0.608;
	    A[a][a][a]=C[a+5]/0.327;
	}

    return 0;
}