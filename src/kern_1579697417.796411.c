#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(810, 870, "ones");
	double ***A = create_three_dim_double(290, 1000, 420, "ones");
	double **B = create_two_dim_double(630, 30, "ones");
	double **C = create_two_dim_double(470, 650, "ones");
	double *E = create_one_dim_double(520, "ones");

	for (int a = 5; a < 470; a++)
	{
	  
	    C[a][a]=C[a-4][a-5]+0.317;
	  
	    double var_a=B[a][a]+0.004;
	    double var_b=B[a-5][a-5]+0.557;
	  
	    E[a]=D[a][a]/0.65;
	    C[a][a]=D[a][a+5]-A[a][a][a];
	}

    return 0;
}