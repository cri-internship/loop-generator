#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(420, 950, "zeros");
	float *B = create_one_dim_float(650, "zeros");

	for (int c = 4; c < 950; c++)
	  for (int b = 3; b < 420; b++)
	    for (int a = 3; a < 420; a++)
	    {
	      
	      float var_a=A[a][b]-0.905;
	      float var_b=A[a-3][b-4]/0.776;
	    }

    return 0;
}