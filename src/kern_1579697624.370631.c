#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(170, "zeros");
	float *A = create_one_dim_float(430, "zeros");
	float **C = create_two_dim_float(20, 80, "zeros");
	float *D = create_one_dim_float(660, "zeros");

	for (int b = 3; b < 660; b++)
	  for (int a = 3; a < 660; a++)
	  {
	    
	     D[a]=D[a-3]*0.884;
	    
	     D[a]=B[a];
	  }

    return 0;
}