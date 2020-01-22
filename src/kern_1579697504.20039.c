#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(10, 940, "random");
	float **A = create_two_dim_float(70, 490, "random");

	for (int c = 3; c < 490; c++)
	  for (int b = 5; b < 6; b++)
	    for (int a = 5; a < 6; a++)
	    {
	      
	      A[a][b]=0.855;
	      A[a-5][b-3]=0.371;
	      
	      float var_a=B[a][b]+0.412;
	      float var_b=B[a+4][b+4]*0.624;
	    }

    return 0;
}