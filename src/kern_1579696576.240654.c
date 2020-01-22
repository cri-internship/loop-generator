#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(500, "random");
	double *C = create_one_dim_double(30, "random");
	double ***D = create_three_dim_double(650, 320, 280, "random");
	double ***A = create_three_dim_double(450, 560, 690, "random");

	for (int a = 1; a < 30; a++)
	{
	  
	    C[a]=C[a-1]/0.147;
	  
	    C[a]=0.258;
	  
	    B[a]=B[a+2]-0.499/C[a]*A[a][a][a];
	  
	    B[a]=0.351;
	  
	    A[a][a][a]=D[a][a][a]+B[a];
	    B[a]=D[a+3][a+3][a+1]-C[a]+B[a]*A[a][a][a];
	}

    return 0;
}