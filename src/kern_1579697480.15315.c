#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(640, 780, "random");
	double ***A = create_three_dim_double(860, 180, 680, "random");
	double **C = create_two_dim_double(340, 600, "random");

	for (int a = 5; a < 636; a++)
	{
	  
	    B[a][a]=B[a-4][a-1]/A[a][a][a]+C[a][a];
	  
	    B[a][a]=B[a+3][a+2]*C[a][a]+0.076;
	  
	    A[a][a][a]=A[a+4][a][a+1]-B[a][a]+0.775;
	  
	    A[a][a][a]=C[a][a];
	  
	    double var_a=B[a][a]/0.439;
	    double var_b=B[a-1][a-4]/0.389;
	}

    return 0;
}