#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(140, "random");
	float ***B = create_three_dim_float(260, 200, 610, "random");
	float *A = create_one_dim_float(770, "random");
	float ***E = create_three_dim_float(320, 650, 670, "random");
	float *D = create_one_dim_float(750, "random");

	for (int a = 0; a < 315; a++)
	{
	  
	    E[a][a][a]=E[a][a+5][a+5]*0.821;
	}

    return 0;
}