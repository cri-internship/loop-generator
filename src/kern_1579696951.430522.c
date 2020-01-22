#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(920, 940, 640, "random");
	double *A = create_one_dim_double(180, "random");
	double *C = create_one_dim_double(50, "random");

	for (int a = 5; a < 920; a++)
	{
	  
	    B[a][a][a]=0.641;
	    B[a-3][a-5][a-3]=0.613;
	}

    return 0;
}