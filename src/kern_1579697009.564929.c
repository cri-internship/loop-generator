#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(160, 40, "random");
	float *B = create_one_dim_float(280, "random");

	for (int c = 5; c < 36; c++)
	  for (int b = 3; b < 157; b++)
	    for (int a = 3; a < 157; a++)
	    {
	      
	      A[a][b]=A[a+3][b+3]/0.969;
	      
	      A[a][b]=B[a];
	      
	      float var_a=A[a][b]/0.787;
	      float var_b=A[a][b+4]*0.94;
	      
	      B[a]=B[a]-A[a][b];
	    }

    return 0;
}