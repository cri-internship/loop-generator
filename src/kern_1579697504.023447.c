#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(480, "ones");
	float ***B = create_three_dim_float(100, 750, 710, "ones");

	for (int c = 0; c < 710; c++)
	  for (int b = 5; b < 750; b++)
	    for (int a = 3; a < 100; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-5][c]/0.177;
	      
	      A[a]=A[a-3]/0.897;
	    }

    return 0;
}