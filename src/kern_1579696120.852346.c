#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(800, 670, 940, "random");
	float **E = create_two_dim_float(190, 120, "random");
	float **D = create_two_dim_float(550, 990, "random");
	float *C = create_one_dim_float(10, "random");
	float **B = create_two_dim_float(220, 240, "random");

	for (int b = 0; b < 670; b++)
	  for (int a = 4; a < 800; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b][a-4]-0.527;
	  }

    return 0;
}