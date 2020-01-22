#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "random");
	float **C = create_two_dim_float(740, 510, "random");
	float *D = create_one_dim_float(850, "random");
	float **A = create_two_dim_float(70, 20, "random");

	for (int a = 5; a < 340; a++)
	{
	  
	    B[a]=B[a-3]/D[a]-A[a][a];
	  
	    C[a][a]=C[a+5][a+3]-0.967;
	  
	    C[a][a]=C[a+3][a+2]*0.621;
	  
	    float var_a=C[a][a]*0.21;
	    float var_b=C[a][a+4]-0.744;
	  
	    D[a]=D[a]/C[a][a]+A[a][a];
	    C[a][a]=D[a+1]+C[a][a]-A[a][a];
	  
	    B[a]=B[a]-A[a][a]/C[a][a]+D[a];
	}

    return 0;
}