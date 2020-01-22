#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(510, "random");
	float **D = create_two_dim_float(750, 1000, "random");
	float **B = create_two_dim_float(120, 710, "random");
	float **E = create_two_dim_float(310, 100, "random");
	float **C = create_two_dim_float(190, 950, "random");

	for (int a = 5; a < 115; a++)
	{
	  
	    A[a]=A[a-2]/0.225;
	  
	    D[a][a]=D[a][a-1]*0.84;
	  
	    E[a][a]=E[a-5][a]/A[a]-D[a][a];
	  
	    D[a][a]=D[a+3][a+3]*0.26;
	  
	    float var_a=B[a][a]/0.995;
	    float var_b=B[a+1][a+5]/0.791;
	  
	    D[a][a]=A[a]+B[a][a]-C[a][a]*E[a][a]/E[a][a];
	    A[a]=A[a+2]*C[a][a]-E[a][a]+D[a][a];
	  
	    float var_c=C[a][a]+0.537;
	    float var_d=C[a-4][a-3]/0.452;
	}

    return 0;
}