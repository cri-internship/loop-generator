#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(670, 960, 510, "zeros");
	double **B = create_two_dim_double(880, 10, "zeros");

	for (int a = 2; a < 665; a++)
	{
	  
	    B[a][a]=B[a-2][a-1]/A[a][a][a];
	  
	    B[a][a]=B[a+3][a+1]+A[a][a][a];
	  
	    A[a][a][a]=B[a][a];
	    A[a+1][a+4][a+5]=B[a][a];
	  
	    double var_a=B[a][a]*0.422;
	    double var_b=B[a+1][a+2]+0.562;
	  
	    B[a][a]=B[a][a]/A[a][a][a];
	    A[a][a][a]=B[a][a-1]-A[a][a][a];
	}

    return 0;
}