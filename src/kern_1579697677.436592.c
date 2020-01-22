#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(20, 300, 970, "zeros");
	float ***C = create_three_dim_float(910, 40, 820, "zeros");
	float ***B = create_three_dim_float(380, 450, 610, "zeros");

	for (int a = 5; a < 20; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-5][a-1]*C[a][a][a]/B[a][a][a];
	  
	    C[a][a][a]=C[a-5][a-1][a-2]/0.598;
	  
	    B[a][a][a]=B[a-5][a][a-4]+0.535;
	  
	    C[a][a][a]=C[a+1][a][a+2]-A[a][a][a];
	  
	    B[a][a][a]=A[a][a][a]/C[a][a][a];
	  
	    A[a][a][a]=C[a][a][a]-B[a][a][a];
	  
	    float var_a=C[a][a][a]*0.877;
	    float var_b=C[a-3][a][a-1]-0.893;
	}

    return 0;
}