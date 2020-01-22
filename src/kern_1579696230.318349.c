#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(160, 360, 440, "random");
	double *B = create_one_dim_double(190, "random");

	for (int a = 4; a < 156; a++)
	{
	  
	    A[a][a][a]=A[a+3][a+4][a+2]-0.45;
	  
	    B[a]=B[a+4]+0.964;
	  
	    B[a]=B[a+5]/0.376;
	}

    return 0;
}