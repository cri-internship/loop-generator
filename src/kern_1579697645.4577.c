#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(120, 830, "ones");
	float ***B = create_three_dim_float(500, 480, 770, "ones");

	for (int a = 5; a < 115; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+2][a+2]*0.496;
	  
	    float var_a=B[a][a][a]-0.497;
	    float var_b=B[a-3][a-1][a-4]/0.851;
	  
	    float var_c=A[a][a]/0.686;
	    float var_d=A[a+5][a+4]+0.655;
	  
	    A[a][a]=B[a][a][a]*0.449;
	    B[a][a][a]=B[a-3][a-3][a-5]-0.199;
	}

    return 0;
}