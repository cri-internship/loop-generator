#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(90, 230, "ones");
	float **A = create_two_dim_float(600, 720, "ones");
	float *B = create_one_dim_float(430, "ones");

	for (int c = 0; c < 429; c++)
	  for (int b = 0; b < 429; b++)
	    for (int a = 0; a < 429; a++)
	    {
	      
	      B[a]=0.38;
	      B[a+1]=0.256;
	    }

    return 0;
}