#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(40, 550, "random");

	for (int c = 0; c < 548; c++)
	  for (int b = 0; b < 39; b++)
	    for (int a = 0; a < 39; a++)
	    {
	      
	      A[a][b]=A[a+1][b+2]-0.095;
	    }

    return 0;
}