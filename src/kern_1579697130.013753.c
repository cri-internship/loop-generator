#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(690, 660, 870, "ones");
	float **A = create_two_dim_float(940, 580, "ones");

	for (int a = 0; a < 685; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+1][a+5]+0.149;
	  
	    B[a][a][a]=B[a+4][a+3][a+5]/0.219;
	}

    return 0;
}