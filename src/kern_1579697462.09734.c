#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(960, 390, 170, "random");
	float *D = create_one_dim_float(870, "random");
	float *B = create_one_dim_float(220, "random");
	float ***A = create_three_dim_float(550, 580, 60, "random");

	for (int a = 5; a < 550; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-1][a-5]/0.054;
	}

    return 0;
}