#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(950, 670, "ones");
	double *C = create_one_dim_double(490, "ones");
	double **B = create_two_dim_double(610, 800, "ones");
	double **D = create_two_dim_double(140, 440, "ones");
	double **A = create_two_dim_double(490, 720, "ones");

	for (int a = 3; a < 136; a++)
	{
	  
	    D[a][a]=D[a+4][a+3]*0.566;
	  
	    B[a][a]=B[a+5][a+3]+0.771;
	  
	    C[a]=C[a+5]*0.677+B[a][a]-E[a][a];
	  
	    A[a][a]=0.788;
	    A[a-1][a]=0.957;
	  
	    D[a][a]=C[a]-A[a][a]/B[a][a]*E[a][a];
	  
	    double var_a=A[a][a]-0.258;
	    double var_b=A[a+3][a+5]-0.374;
	  
	    D[a][a]=A[a][a]+E[a][a]*D[a][a];
	    A[a][a]=A[a][a-3]-C[a]/E[a][a]+0.786*D[a][a];
	}

    return 0;
}