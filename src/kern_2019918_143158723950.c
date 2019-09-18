#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(100, "random");
	float **B = create_two_dim_float(50, 50, "random");
	float ***C = create_three_dim_float(40, 150, 80, "random");

	for (int c = 2; c < 50; c++)
	  for (int b = 3; b < 50; b++)
	    for (int a = 3; a < 50; a++)
	    {
	      
	      B[a][b-2]=0.081;
	      float  var_a=B[a][b-2]*0.366;
	      
	      B[a-3][b-2]=0.724;
	      float  var_b=B[a-3][b-2]*0.127;
	    }

    return 0;
}