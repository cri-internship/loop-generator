#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(970, 240, "zeros");
	double *A = create_one_dim_double(260, "zeros");

	for (int a = 5; a < 260; a++)
	{
	  
	    A[a]=A[a-5]+B[a][a];
	  
	    B[a][a]=A[a];
	    B[a][a-1]=0.012;
	  
	    double var_a=A[a]+0.139;
	}

    return 0;
}