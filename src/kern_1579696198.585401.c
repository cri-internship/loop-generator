#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(140, 910, "ones");
	double **B = create_two_dim_double(940, 710, "ones");

	for (int a = 5; a < 140; a++)
	{
	  
	    B[a][a]=B[a-4][a-2]/0.003;
	  
	    B[a][a]=B[a-5][a-5]/0.764;
	  
	    double var_a=A[a][a]-0.992;
	    double var_b=A[a-1][a-3]*0.719;
	  
	    double var_c=B[a][a]+0.61;
	    double var_d=B[a+1][a+4]/0.2;
	  
	    A[a][a]=B[a][a]+A[a][a];
	    B[a][a]=B[a-3][a-3]*A[a][a];
	}

    return 0;
}