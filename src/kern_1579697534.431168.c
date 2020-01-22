#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(610, "random");
	float *D = create_one_dim_float(610, "random");
	float **C = create_two_dim_float(660, 850, "random");
	float ***B = create_three_dim_float(690, 630, 180, "random");

	for (int a = 4; a < 608; a++)
	{
	  
	    B[a][a][a]=B[a][a-4][a]/D[a]-A[a]+C[a][a];
	  
	    A[a]=A[a-4]+0.668;
	  
	    A[a]=0.598;
	  
	    C[a][a]=0.521;
	    C[a+5][a+3]=0.427;
	  
	    C[a][a]=0.654;
	  
	    A[a]=A[a]-C[a][a]*B[a][a][a];
	    C[a][a]=A[a+2]*C[a][a]+D[a];
	  
	    float var_a=D[a]-0.446;
	    float var_b=D[a-2]*0.559;
	}

    return 0;
}