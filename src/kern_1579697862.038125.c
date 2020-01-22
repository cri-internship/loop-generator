#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(290, 450, 880, "zeros");
	float *D = create_one_dim_float(270, "zeros");
	float ***C = create_three_dim_float(450, 150, 70, "zeros");
	float **B = create_two_dim_float(740, 670, "zeros");

	for (int a = 0; a < 446; a++)
	{
	  
	    C[a][a][a]=C[a][a+3][a+4]-B[a][a];
	}

    return 0;
}