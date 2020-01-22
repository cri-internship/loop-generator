#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(50, 800, "ones");
	float **B = create_two_dim_float(240, 590, "ones");

	for (int c = 2; c < 590; c++)
	  for (int b = 4; b < 240; b++)
	    for (int a = 4; a < 240; a++)
	    {
	      
	      B[a][b]=B[a-4][b-2]/0.31;
	      
	      B[a][b]=B[a-2][b-2]/0.659;
	    }

    return 0;
}