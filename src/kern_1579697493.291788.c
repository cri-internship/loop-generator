#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(510, 440, 90, "zeros");
	float **B = create_two_dim_float(440, 60, "zeros");
	float *E = create_one_dim_float(270, "zeros");
	float *A = create_one_dim_float(410, "zeros");
	float *D = create_one_dim_float(480, "zeros");

	for (int b = 0; b < 408; b++)
	  for (int a = 0; a < 408; a++)
	  {
	    
	     A[a]=A[a+2]/D[a];
	  }

    return 0;
}