#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(470, "zeros");
	double **A = create_two_dim_double(10, 800, "zeros");

	for (int a = 4; a < 10; a++)
	{
	  
	    B[a]=A[a][a];
	    B[a+5]=0.826;
	  
	    double var_a=A[a][a]-0.296;
	    double var_b=A[a-4][a-2]/0.097;
	  
	    double var_c=B[a]+0.313;
	    double var_d=B[a+4]/0.727;
	}

    return 0;
}