#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(530, 760, 180, "random");
	float *A = create_one_dim_float(240, "random");
	float *B = create_one_dim_float(510, "random");
	float *C = create_one_dim_float(650, "random");
	float ***D = create_three_dim_float(470, 470, 290, "random");

	for (int a = 4; a < 530; a++)
	{
	  
	    E[a][a][a]=E[a-1][a-4][a-2]*0.761;
	}

    return 0;
}