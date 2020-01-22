#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(180, 920, "zeros");
	float **C = create_two_dim_float(990, 300, "zeros");
	float **A = create_two_dim_float(880, 940, "zeros");

	for (int c = 0; c < 918; c++)
	  for (int b = 0; b < 175; b++)
	    for (int a = 0; a < 175; a++)
	    {
	      
	      B[a][b]=B[a+5][b+2]/0.265;
	    }

    return 0;
}