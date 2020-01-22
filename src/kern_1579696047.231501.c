#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(820, 460, "zeros");
	double **D = create_two_dim_double(240, 600, "zeros");
	double *A = create_one_dim_double(680, "zeros");
	double *C = create_one_dim_double(830, "zeros");
	double **B = create_two_dim_double(480, 840, "zeros");

	for (int a = 5; a < 236; a++)
	{
	  
	    D[a][a]=D[a][a-2]*C[a]+0.641;
	  
	    B[a][a]=B[a-5][a-4]+D[a][a]/A[a]-D[a][a];
	  
	    E[a][a]=E[a-2][a-2]*0.896;
	  
	    D[a][a]=D[a+3][a+4]*0.352;
	  
	    B[a][a]=0.628;
	  
	    A[a]=E[a][a]*B[a][a]/D[a][a]+C[a];
	    E[a][a]=E[a+1][a+3]*D[a][a]+0.965/C[a];
	  
	    double var_a=B[a][a]+0.254;
	}

    return 0;
}