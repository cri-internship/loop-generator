#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(570, 1000, 380, "zeros");
	float **D = create_two_dim_float(510, 110, "zeros");
	float **B = create_two_dim_float(610, 990, "zeros");
	float *C = create_one_dim_float(140, "zeros");

	for (int c = 0; c < 106; c++)
	  for (int b = 0; b < 507; b++)
	    for (int a = 0; a < 507; a++)
	    {
	      
	      D[a][b]=D[a+3][b+4]*0.939;
	      
	      float var_a=B[a][b]-0.604;
	      float var_b=B[a+2][b]+0.091;
	    }

    return 0;
}