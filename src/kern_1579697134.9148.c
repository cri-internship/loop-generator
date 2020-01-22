#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(950, "random");
	float **A = create_two_dim_float(30, 380, "random");

	for (int c = 4; c < 376; c++)
	  for (int b = 2; b < 28; b++)
	    for (int a = 2; a < 28; a++)
	    {
	      
	      A[a][b]=A[a-2][b-4]-0.576;
	      
	      B[a]=0.337;
	      B[a+1]=0.392;
	      
	      float var_a=A[a][b]-0.145;
	      float var_b=A[a+2][b+4]-0.013;
	    }

    return 0;
}