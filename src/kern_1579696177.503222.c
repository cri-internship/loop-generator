#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(660, 560, 350, "random");
	float **A = create_two_dim_float(510, 280, "random");

	for (int a = 2; a < 510; a++)
	{
	  
	    A[a][a]=A[a-2][a]-0.809;
	}

    return 0;
}