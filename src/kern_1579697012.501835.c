#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(790, 60, "ones");
	float ***A = create_three_dim_float(740, 900, 260, "ones");

	for (int c = 3; c < 60; c++)
	  for (int b = 4; b < 790; b++)
	    for (int a = 4; a < 790; a++)
	    {
	      
	      B[a][b]=B[a-4][b-3]/0.666;
	    }

    return 0;
}