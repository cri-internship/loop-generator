#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(360, "ones");
	float **B = create_two_dim_float(990, 260, "ones");

	for (int c = 4; c < 260; c++)
	  for (int b = 3; b < 359; b++)
	    for (int a = 3; a < 359; a++)
	    {
	      
	      B[a][b]=B[a-3][b-4]*0.993;
	      
	      B[a][b]=A[a]/B[a][b];
	      A[a]=A[a+1]-0.421;
	    }

    return 0;
}