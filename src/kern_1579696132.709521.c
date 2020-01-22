#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(60, 120, "zeros");
	float **C = create_two_dim_float(680, 570, "zeros");
	float **D = create_two_dim_float(900, 530, "zeros");
	float **E = create_two_dim_float(760, 20, "zeros");
	float *B = create_one_dim_float(440, "zeros");

	for (int b = 0; b < 436; b++)
	  for (int a = 0; a < 436; a++)
	  {
	    
	     B[a]=B[a+4]/0.265;
	  }

    return 0;
}