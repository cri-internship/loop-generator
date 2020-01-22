#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(1000, 740, "zeros");
	float **A = create_two_dim_float(150, 560, "zeros");
	float ***B = create_three_dim_float(740, 60, 930, "zeros");
	float *C = create_one_dim_float(710, "zeros");

	for (int a = 0; a < 995; a++)
	{
	  
	    D[a][a]=0.75;
	    D[a+5][a+3]=C[a];
	}

    return 0;
}