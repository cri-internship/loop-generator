#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(510, 550, "ones");
	float ***C = create_three_dim_float(200, 880, 440, "ones");
	float *B = create_one_dim_float(870, "ones");
	float ***A = create_three_dim_float(420, 190, 400, "ones");

	for (int a = 5; a < 195; a++)
	{
	  
	    D[a][a]=D[a-4][a-1]/0.026;
	  
	    C[a][a][a]=C[a-5][a-3][a-5]*0.015;
	  
	    C[a][a][a]=C[a+5][a+5][a+1]*0.546;
	}

    return 0;
}