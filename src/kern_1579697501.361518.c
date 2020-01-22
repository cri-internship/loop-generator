#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(60, 160, "zeros");
	float **B = create_two_dim_float(330, 280, "zeros");
	float **A = create_two_dim_float(710, 710, "zeros");
	float ***C = create_three_dim_float(240, 650, 100, "zeros");

	for (int a = 0; a < 59; a++)
	{
	  
	    D[a][a]=D[a+1][a+1]-0.438;
	}

    return 0;
}