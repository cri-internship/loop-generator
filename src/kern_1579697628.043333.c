#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(470, 220, "zeros");
	double *A = create_one_dim_double(670, "zeros");
	double **B = create_two_dim_double(610, 410, "zeros");
	double **C = create_two_dim_double(970, 720, "zeros");
	double **D = create_two_dim_double(250, 880, "zeros");

	for (int a = 2; a < 610; a++)
	{
	  
	    double var_a=A[a]-0.68;
	    A[a]=0.779;
	  
	    B[a][a]=E[a][a];
	    B[a-1][a-2]=D[a][a]+A[a]-C[a][a];
	  
	    C[a][a]=0.738;
	    C[a+4][a+4]=0.946;
	  
	    double var_b=A[a]+0.137;
	    double var_c=A[a-1]*0.238;
	  
	    double var_d=A[a]/0.258;
	}

    return 0;
}