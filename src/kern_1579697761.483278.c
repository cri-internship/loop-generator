#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(150, 170, "ones");
	double ***A = create_three_dim_double(160, 540, 940, "ones");
	double ***C = create_three_dim_double(780, 850, 830, "ones");

	for (int a = 5; a < 147; a++)
	{
	  
	    B[a][a]=0.598;
	    B[a+1][a+1]=0.796;
	  
	    B[a][a]=0.562;
	  
	    double var_a=C[a][a][a]/0.767;
	    double var_b=C[a-1][a-5][a-2]+0.498;
	}

    return 0;
}