#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(200, "random");
	float *A = create_one_dim_float(810, "random");
	float ***B = create_three_dim_float(510, 930, 670, "random");

	for (int b = 0; b < 198; b++)
	  for (int a = 0; a < 198; a++)
	  {
	    
	     C[a]=C[a+2]-A[a]/B[a][b][a];
	  }

    return 0;
}