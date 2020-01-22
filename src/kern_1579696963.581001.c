#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(870, "ones");
	float *A = create_one_dim_float(640, "ones");
	float ***B = create_three_dim_float(950, 50, 820, "ones");

	for (int c = 3; c < 820; c++)
	  for (int b = 5; b < 50; b++)
	    for (int a = 4; a < 950; a++)
	    {
	      
	      B[a][b][c]=0.003;
	      B[a-4][b-5][c-3]=0.783;
	    }

    return 0;
}