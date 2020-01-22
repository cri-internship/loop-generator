#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(430, 710, 100, "random");
	float *C = create_one_dim_float(440, "random");
	float *B = create_one_dim_float(110, "random");

	for (int b = 2; b < 110; b++)
	  for (int a = 2; a < 110; a++)
	  {
	    
	     B[a]=B[a-2]/A[a][b][a]+C[a];
	  }

    return 0;
}