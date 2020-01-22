#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(110, 910, "zeros");
	double *A = create_one_dim_double(860, "zeros");
	double **C = create_two_dim_double(310, 600, "zeros");

	for (int a = 5; a < 305; a++)
	{
	  
	    A[a]=A[a-5]+0.607/C[a][a];
	  
	    C[a][a]=0.94;
	    C[a-5][a-1]=0.806;
	  
	    A[a]=0.058*B[a][a];
	  
	    double var_a=C[a][a]-0.32;
	    double var_b=C[a+5][a+3]-0.417;
	}

    return 0;
}