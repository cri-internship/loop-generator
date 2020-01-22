#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(980, "ones");
	float ***B = create_three_dim_float(830, 50, 470, "ones");
	float **A = create_two_dim_float(600, 690, "ones");
	float *D = create_one_dim_float(410, "ones");

	for (int b = 2; b < 50; b++)
	  for (int a = 5; a < 830; a++)
	  {
	    
	     float var_a=B[a][b][a]-0.769;
	     float var_b=B[a-2][b-2][a-5]*0.693;
	  }

    return 0;
}