#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(640, 380, "random");
	double ***C = create_three_dim_double(510, 880, 10, "random");
	double *B = create_one_dim_double(960, "random");

	for (int a = 3; a < 507; a++)
	{
	  
	    A[a][a]=A[a-2][a-3]-C[a][a][a]*0.414;
	  
	    C[a][a][a]=C[a][a-3][a-1]/A[a][a]-B[a];
	  
	    B[a]=B[a+2]+C[a][a][a]-A[a][a];
	  
	    C[a][a][a]=C[a][a+1][a+3]/0.905;
	  
	    double var_a=B[a]+0.53;
	    double var_b=B[a-2]+0.605;
	}

    return 0;
}