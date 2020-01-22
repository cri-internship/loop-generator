#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(220, 630, 950, "random");
	float *B = create_one_dim_float(340, "random");
	float ***C = create_three_dim_float(960, 690, 430, "random");

	for (int a = 5; a < 217; a++)
	{
	  
	    C[a][a][a]=0.109;
	    C[a+5][a+2][a]=0.369;
	  
	    A[a][a][a]=0.573;
	    A[a+2][a+3][a+3]=0.116;
	  
	    A[a][a][a]=0.683/B[a];
	  
	    C[a][a][a]=A[a][a][a];
	  
	    float var_a=C[a][a][a]/0.851;
	    float var_b=C[a+2][a][a+3]+0.539;
	}

    return 0;
}