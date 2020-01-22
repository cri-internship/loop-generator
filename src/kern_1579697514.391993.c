#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(140, 280, "zeros");
	double *A = create_one_dim_double(400, "zeros");
	double **B = create_two_dim_double(730, 340, "zeros");

	for (int a = 5; a < 135; a++)
	{
	  
	    C[a][a]=C[a-4][a-4]*B[a][a]+A[a];
	  
	    C[a][a]=C[a+1][a+5]+B[a][a];
	  
	    A[a]=0.485;
	    A[a-1]=0.199;
	  
	    C[a][a]=A[a]+C[a][a];
	    A[a]=A[a]/B[a][a];
	  
	    double var_a=A[a]-0.858;
	    double var_b=A[a+3]+0.924;
	}

    return 0;
}