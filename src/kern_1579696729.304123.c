#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(520, 940, "zeros");
	double ***E = create_three_dim_double(880, 220, 40, "zeros");
	double *B = create_one_dim_double(700, "zeros");
	double **C = create_two_dim_double(140, 840, "zeros");
	double ***D = create_three_dim_double(990, 520, 250, "zeros");

	for (int a = 5; a < 140; a++)
	{
	  
	    A[a][a]=A[a-1][a-5]*0.163;
	  
	    C[a][a]=C[a-3][a-1]*A[a][a];
	  
	    E[a][a][a]=E[a-1][a-5][a-1]*0.367;
	  
	    E[a][a][a]=E[a-4][a-2][a-3]+0.274;
	  
	    B[a]=B[a-1]+C[a][a]/E[a][a][a]-D[a][a][a]*C[a][a];
	  
	    D[a][a][a]=D[a][a+3][a+5]-0.999;
	  
	    E[a][a][a]=E[a+4][a+1][a+2]-0.01/D[a][a][a];
	}

    return 0;
}