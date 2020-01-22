#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(260, "zeros");
	double **A = create_two_dim_double(790, 930, "zeros");
	double *D = create_one_dim_double(510, "zeros");
	double **C = create_two_dim_double(850, 180, "zeros");

	for (int a = 4; a < 260; a++)
	{
	  
	    D[a]=D[a-2]-0.543;
	  
	    C[a][a]=C[a-2][a-3]/0.398;
	  
	    B[a]=B[a-2]/0.894;
	  
	    A[a][a]=A[a+4][a+2]/0.799;
	  
	    A[a][a]=A[a+3][a+3]*C[a][a]/0.235+C[a][a];
	  
	    C[a][a]=0.511;
	  
	    C[a][a]=D[a]+A[a][a]-B[a];
	    D[a]=D[a-1]*B[a]/C[a][a];
	}

    return 0;
}