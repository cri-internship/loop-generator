#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(480, 980, 510, "ones");
	double *B = create_one_dim_double(860, "ones");
	double **D = create_two_dim_double(620, 20, "ones");
	double *A = create_one_dim_double(250, "ones");

	for (int a = 5; a < 250; a++)
	{
	  
	    A[a]=0.5;
	    A[a]=0.774;
	  
	    D[a][a]=0.962*A[a]-B[a];
	    D[a-1][a-5]=C[a][a][a];
	  
	    C[a][a][a]=0.761;
	    C[a-3][a-1][a-4]=0.999;
	  
	    double var_a=D[a][a]*0.067;
	    double var_b=D[a-3][a-2]-0.387;
	}

    return 0;
}