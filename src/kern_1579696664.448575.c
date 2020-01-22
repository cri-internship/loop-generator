#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(500, "ones");
	int ***B = create_three_dim_int(160, 60, 200, "ones");

	for (int c = 3; c < 500; c++)
	  for (int b = 3; b < 500; b++)
	    for (int a = 3; a < 500; a++)
	    {
	      
	      A[a]=A[a-3]*8;
	      
	      A[a]=A[a-2]-26;
	    }

    return 0;
}