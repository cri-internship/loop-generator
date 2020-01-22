#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(470, "random");
	float *B = create_one_dim_float(830, "random");

	for (int b = 1; b < 830; b++)
	  for (int a = 1; a < 830; a++)
	  {
	    
	     B[a]=B[a-1]*0.802;
	  }

    return 0;
}