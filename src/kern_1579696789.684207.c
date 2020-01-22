#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(290, 440, "random");

	for (int c = 0; c < 439; c++)
	  for (int b = 0; b < 285; b++)
	    for (int a = 0; a < 285; a++)
	    {
	      
	      float var_a=A[a][b]/0.413;
	      float var_b=A[a+5][b+1]/0.874;
	    }

    return 0;
}