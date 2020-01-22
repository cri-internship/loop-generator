#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(1000, "random");
	float *D = create_one_dim_float(130, "random");
	float *C = create_one_dim_float(920, "random");
	float **B = create_two_dim_float(970, 400, "random");

	for (int b = 4; b < 125; b++)
	  for (int a = 4; a < 125; a++)
	  {
	    
	     D[a]=D[a+5]-0.729;
	    
	     D[a]=0.261;
	  }

    return 0;
}