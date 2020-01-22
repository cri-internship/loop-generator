#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(290, 420, 120, "ones");
	float ***B = create_three_dim_float(950, 40, 560, "ones");

	for (int a = 0; a < 285; a++)
	{
	  
	    B[a][a][a]=B[a+4][a][a]*0.364;
	  
	    A[a][a][a]=B[a][a][a];
	    A[a][a+3][a]=B[a][a][a];
	  
	    float var_a=A[a][a][a]/0.104;
	    float var_b=A[a+2][a+5][a+4]/0.89;
	}

    return 0;
}