#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(930, 70, "ones");

	for (int c = 0; c < 66; c++)
	  for (int b = 0; b < 927; b++)
	    for (int a = 0; a < 927; a++)
	    {
	      
	      A[a][b]=A[a+3][b+4]+0.425;
	    }

    return 0;
}