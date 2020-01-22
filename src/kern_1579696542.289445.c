#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(200, "ones");
	double ***A = create_three_dim_double(480, 80, 770, "ones");
	double ***B = create_three_dim_double(320, 200, 970, "ones");

	for (int a = 2; a < 196; a++)
	{
	  
	    B[a][a][a]=B[a][a+1][a+2]-0.27;
	  
	    B[a][a][a]=B[a+2][a+3][a+2]/C[a]+A[a][a][a];
	  
	    C[a]=C[a+4]-B[a][a][a]+B[a][a][a];
	  
	    double var_a=C[a]+0.864;
	    double var_b=C[a-2]/0.503;
	}

    return 0;
}