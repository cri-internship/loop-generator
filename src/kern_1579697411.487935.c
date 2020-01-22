#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(480, "ones");
	float *A = create_one_dim_float(490, "ones");
	float *B = create_one_dim_float(860, "ones");
	float *D = create_one_dim_float(20, "ones");
	float **C = create_two_dim_float(580, 520, "ones");

	for (int b = 5; b < 490; b++)
	  for (int a = 5; a < 490; a++)
	  {
	    
	     A[a]=A[a-5]-0.468;
	  }

    return 0;
}