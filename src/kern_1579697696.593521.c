#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(600, 670, 790, "zeros");
	float ***B = create_three_dim_float(750, 390, 670, "zeros");

	for (int a = 3; a < 600; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-3][a-2]-B[a][a][a];
	}

    return 0;
}