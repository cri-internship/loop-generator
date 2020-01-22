#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(20, "random");
	double *C = create_one_dim_double(20, "random");
	double ***D = create_three_dim_double(640, 360, 60, "random");
	double ***B = create_three_dim_double(60, 670, 220, "random");

	for (int a = 5; a < 20; a++)
	{
	  
	    A[a]=A[a-5]/C[a];
	  
	    double var_a=C[a]/0.554;
	    C[a]=0.834;
	  
	    B[a][a][a]=B[a+4][a+4][a+4]-A[a]/D[a][a][a]+D[a][a][a];
	  
	    B[a][a][a]=B[a+3][a+4][a+4]+0.023;
	  
	    D[a][a][a]=D[a+1][a+1][a+3]/B[a][a][a];
	}

    return 0;
}