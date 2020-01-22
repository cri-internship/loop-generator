#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(370, 410, "zeros");

	for (int c = 0; c < 405; c++)
	  for (int b = 0; b < 366; b++)
	    for (int a = 0; a < 366; a++)
	    {
	      
	      A[a][b]=A[a+4][b+5]+0.454;
	      
	      A[a][b]=A[a+4][b+4]*0.215;
	    }

    return 0;
}