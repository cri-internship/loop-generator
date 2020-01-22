#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(190, 730, 300, "ones");
	double *B = create_one_dim_double(900, "ones");

	for (int a = 4; a < 186; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+4][a]/0.353;
	  
	    B[a]=B[a+5]-A[a][a][a];
	  
	    double var_a=B[a]+0.421;
	    double var_b=B[a+2]-0.637;
	  
	    A[a][a][a]=A[a][a][a]-0.804;
	    B[a]=A[a-1][a-2][a-4]-0.867;
	  
	    A[a][a][a]=A[a][a][a]*0.858;
	    B[a]=A[a][a+3][a+4]*B[a];
	}

    return 0;
}