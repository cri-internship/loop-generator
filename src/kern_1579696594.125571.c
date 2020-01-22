#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(210, 250, "ones");
	float ***C = create_three_dim_float(330, 640, 840, "ones");
	float **B = create_two_dim_float(670, 800, "ones");
	float ***D = create_three_dim_float(940, 490, 960, "ones");

	for (int a = 4; a < 330; a++)
	{
	  
	    C[a][a][a]=0.417;
	    C[a-4][a-4][a-1]=0.51;
	}

    return 0;
}