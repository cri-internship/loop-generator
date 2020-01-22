#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(530, 320, "random");
	double **B = create_two_dim_double(690, 980, "random");

	for (int a = 4; a < 525; a++)
	{
	  
	    B[a][a]=B[a-4][a-4]-0.553;
	  
	    A[a][a]=B[a][a];
	    A[a+4][a+3]=B[a][a];
	  
	    double var_a=A[a][a]/0.528;
	    double var_b=A[a+5][a+1]-0.807;
	}

    return 0;
}