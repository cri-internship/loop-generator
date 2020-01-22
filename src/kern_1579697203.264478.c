#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(370, 900, "random");
	float *B = create_one_dim_float(470, "random");
	float **C = create_two_dim_float(830, 970, "random");

	for (int a = 4; a < 370; a++)
	{
	  
	    C[a][a]=C[a][a-1]/0.941-A[a][a];
	  
	    A[a][a]=0.104;
	    A[a-4][a-4]=0.261;
	}

    return 0;
}